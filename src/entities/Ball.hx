package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.Sfx;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;

import utils.Vector2;

class Ball extends Entity
{
  var g:Image;
  var collisionSfx:Sfx;
  var death:Sfx;
  
  var velocity:Vector2 = new Vector2();
  var speed:Float;

  public function new(x:Int, y:Int, speed:Float = 7)
  {
    super(x, y);

    type = "ball";

    collisionSfx = new Sfx("audio/tink.wav");
    death = new Sfx("audio/death.wav");

    g = new Image("graphics/ball.png");
    g.scale = 4;

    graphic = g;


    this.speed = speed;

    // give initial velocity (always same)
    velocity.x = speed/2;
    velocity.y = speed/2;

    setHitbox(cast(g.scaledWidth, Int), cast(g.scaledHeight, Int), 0, 0);
  }


  var pause:Bool = true;
  var pauseCounter:Int = 60;


  override public function update()
  {
    // sleep for first second of life
    if (pause) {
      pauseCounter--;
    }
    if (pauseCounter == 0 && pause) {
      pause = false;
    }

    // ball movement
    if (!pause) {
      x += velocity.x;
      y += velocity.y;
    }

    
   
    // Check for collision with walls
    if (x < 0) { // left wall
      x = 0;
      velocity.x = -velocity.x;
    } 
    else if (x + g.scaledWidth > HXP.width) { // right wall
      x = HXP.width - g.scaledWidth;
      velocity.x = -velocity.x;
    }

    if (y < 0) { // ceiling
      y = 0;
      velocity.y = -velocity.y;
    }
    
    // Die when floor hit
    if (y + g.scaledHeight > HXP.height) { // floor
      death.play(0.2);
      scene.remove(this);

      // cast scene to our scene class and trigger function
      var scene:MainScene = cast(HXP.scene, MainScene);
      scene.spawnNewBall();
    }


    // check player collision
    var e:Entity = collide("player", x, y);

    if (e != null) {
      var p:Player = cast(e, Player);
      
      // if ball is higher than paddle, it collided with top of paddle
      if (y + g.scaledHeight > p.y) {
        y = p.y - g.scaledHeight;

        // Change x and y velocity depending on distance along paddle
        velocity.x = (x - (p.x + p.width/2)) / 7;

        // ensure velocity.x < speed
        if (Math.abs(velocity.x) > speed) {
          velocity.x = (velocity.x < 0 ? -1 : 1) * (speed - 1); // sign of v.x * speed
        }

        // normalize y velocity to speed & reverse direction
        velocity.y = - Math.sqrt(Math.pow(speed, 2) - Math.pow(velocity.x, 2)); 
        

        collisionSfx.play();
      }
    }

    // check brick collision

    e = collide("brick", x, y);

    if (e != null) {
      var b:Brick = cast(e, Brick);

      // check that brick isn't "dead"

      if (!b.dead) {
        // this is a very simple and clever method that I took from a stackexchange post:
        // https://gamedev.stackexchange.com/questions/29786/a-simple-2d-rectangle-collision-algorithm-that-also-determines-which-sides-that

        b.destroy(velocity);

        var w:Float = (g.scaledWidth + b.g.scaledWidth)/2;
        var h:Float = (g.scaledHeight + b.g.scaledHeight)/2;
        var dx:Float = centerX - b.centerX;
        var dy:Float = centerY - b.centerY;

        var wy:Float = w * dy;
        var hx:Float = h * dx;

        if (wy > hx) {
          if (wy > -hx) { // top
            velocity.y = -velocity.y;
          } else { // left
            velocity.x = -velocity.x;
          }
        } else {
          if (wy > -hx) { // right
            velocity.x = -velocity.x;
          } else { // bottom
            velocity.y = -velocity.y;
          }
        }

        collisionSfx.play();

      }
    }

    super.update();
  }

}

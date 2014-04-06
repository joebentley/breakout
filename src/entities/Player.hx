package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.HXP;
import com.haxepunk.Sfx;

import utils.Vector2;

class Player extends Entity
{
  public var g:Image;

  var shotSfx:Sfx;

  public function new(x:Int, y:Int)
  {
    super(x, y);

    g = new Image("graphics/paddle.png");
    g.scale = 6;

    graphic = g;

    setHitbox(cast(g.scaledWidth, Int), cast(g.scaledHeight, Int), 0, 0);
    type = "player";

    shotSfx = new Sfx("audio/shot.wav");
  }

  
  public var shots:Float = 100;

  var pause:Bool = true;
  var pauseCounter:Int = 60;

  public override function update()
  {
    // pause shooting for first second of life
    if (pause) {
      pauseCounter--;
    }
    if (pauseCounter == 0 && pause) {
      pause = false;
    }


    if (Input.pressed(Key.Z) && shots >= 20 && !pause) {
      HXP.scene.add(new Bullet(x + width/2 - 2, y));
      shots -= 20;
      shotSfx.play();
    }

    if (shots < 100) {
      shots += 0.2;
    }
    

    //x = Input.mouseX - g.scaledWidth/2;

    if (Input.check(Key.LEFT)) {
      x -= 10;
    }

    if (Input.check(Key.RIGHT)) {
      x += 10;
    }

    super.update();
  }
}


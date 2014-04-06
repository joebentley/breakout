package entities;


import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;

import utils.Vector2;

class Brick extends Entity
{
  public var g:Image;

  var velocity:Vector2 = new Vector2();
  var drag:Float = 0.8;

  public function new(x:Int, y:Int, colour:String)
  {
    super(x, y);
    
    g = new Image("graphics/" + colour + "brick.png");
    g.scale = 3;
    
    graphic = g;

    setHitbox(cast(g.scaledWidth, Int), cast(g.scaledHeight, Int), 0, 0);

    type = "brick";
  }


  public function destroy(ballVelocity:Vector2)
  {
    // trigger death anim
    dead = true;
    velocity = ballVelocity.clone();
  }


  public var dead:Bool = false;

  override public function update()
  {
    if (dead) {
      g.alpha -= 0.05;
      velocity.y *= drag;
      velocity.x *= drag;

      x += velocity.x;
      y += velocity.y;
    }
    if (g.alpha <= 0) {
      scene.remove(this);
    }

    super.update();
  }

}

package entities;


import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;

import utils.Vector2;

class Bullet extends Entity
{
  var g:Image;
  var speed:Int = 10;

  public function new(x, y)
  {
    super(x, y);

    g = new Image("graphics/bullet.png");
    g.scale = 4;

    graphic = g;
    
    setHitbox(cast(g.scaledWidth, Int), cast(g.scaledHeight, Int), 0, 0);
  }

  override public function update()
  {
    y -= speed;


    var e:Entity = collide("brick", x, y);

    if (e != null) {
      var b:Brick = cast(e, Brick);

      var v:Vector2 = new Vector2(0, -speed);

      b.destroy(v);

      scene.remove(this);
    }

    super.update();
  }
}

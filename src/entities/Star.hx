package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;


class Star extends Entity
{
  var g:Image;
  var speed:Int;

  public function new(x, y, scale, speed)
  {
    super(x, y);

    g = new Image("graphics/star.png");
    g.scale = scale;
    graphic = g;

    this.speed = speed;

    layer = 10; // on bottom
  }


  override public function update()
  {
    y += speed;

    super.update();
  }
}

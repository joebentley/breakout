package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;


class BarBackdrop extends Entity
{
  var g:Image;


  public function new(x:Int, y:Int)
  {
    super(x, y);

    g = new Image("graphics/back.png");
    g.scale = 3;

    graphic = g;
  }

}

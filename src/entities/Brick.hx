package entities;


import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;


class Brick extends Entity
{
  public var g:Image;

  public function new(x:Int, y:Int, colour:String)
  {
    super(x, y);
    
    g = new Image("graphics/" + colour + "brick.png");
    g.scale = 3;
    
    graphic = g;

    setHitbox(cast(g.scaledWidth, Int), cast(g.scaledHeight, Int), 0, 0);

    type = "brick";
  }

  public function destroy()
  {
    scene.remove(this);
  }

}

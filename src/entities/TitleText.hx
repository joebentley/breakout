package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Text;



class TitleText extends Entity
{

  public function new(x:Int, y:Int, scale:Int, text:String)
  {
    super(x, y);

    var t = new Text(text);
    t.size = scale;
    graphic = t;
  }

}

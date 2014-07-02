package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Text;



class TitleText extends Entity
{
  public var textString:Text;

  public function new(x:Int, y:Int, scale:Int, text:String)
  {
    super(x, y);

    textString = new Text(text);
    textString.size = scale;
    graphic = textString;
  }

}

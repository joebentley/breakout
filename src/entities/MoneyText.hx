package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Text;
import com.haxepunk.HXP;


class MoneyText extends Entity
{
  var text:Text;

  public function new(x, y) 
  {
    super(x, y);
      
    text = new Text("0$");
    text.size = 30;

    graphic = text;
  }

  override public function update()
  {
    text.text = Game.money + "$";

    super.update();
  }
}

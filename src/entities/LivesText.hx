package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Text;
import com.haxepunk.HXP;


class LivesText extends Entity
{
  var text:Text;

  public function new(x, y) 
  {
    super(x, y);
      
    text = new Text("Lives: 3");
    text.size = 30;

    graphic = text;
  }

  override public function update()
  {
    text.text = "Lives: " + Game.lives;

    super.update();
  }
}

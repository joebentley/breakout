package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;


class Bar extends Entity
{
  var g:Image;


  public function new(x:Int, y:Int) 
  {
    super(x, y);

    g = new Image("graphics/bar.png");
    g.scaleY = 4;
    
    graphic = g;
  }

  override public function update()
  {
    var player:Array<Player> = new Array<Player>();

    HXP.scene.getType("player", player);

    if (player.length != 0) {
      g.scaleX = (player[0].shots / 100) * 88;
    }

    super.update();
  }

}

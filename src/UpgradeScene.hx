

import com.haxepunk.Scene;
import com.haxepunk.utils.Input;
import com.haxepunk.HXP;
import com.haxepunk.utils.Key;

import entities.TitleText;
import entities.Player;

class UpgradeScene extends Scene
{
  public function new()
  {
    super();
  }

  
  override public function begin()
  {
    add(new TitleText(100, 300, 20, "Press Z to buy laser for $1000"));

    // select next level
    Game.level++;

    super.begin();
  }


  // trigger pause on continue
  var start:Bool = false;
  var startCounter:Int = 100;

  override public function update()
  {
    if (Input.pressed(Key.Z) && Game.money >= 1000) {
      Game.hasLaser = true;
      Game.money -= 1000;
    }

    if (Input.check(Key.ENTER)) {
      start = true;
    }

    if (start) {
      startCounter--;
    }

    if (startCounter == 0) {
      HXP.scene = new MainScene();
    }

    super.update();
  }

}

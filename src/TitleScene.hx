import com.haxepunk.Scene;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;
import com.haxepunk.HXP;

import entities.TitleText;
import entities.Player;

class TitleScene extends Scene
{
  var startSfx:Sfx;
  var startText:TitleText;

  override public function begin()
  {
    startSfx = new Sfx("audio/start.wav");

    startText = new TitleText(190, 300, 30, "Press Z to play!");
    add(startText);
    
    super.begin();
  }


  // pause for a second before starting
  var start:Bool = false;
  var startCounter:Int = 100;

  override public function update()
  {
    if (Input.check(Key.Z)) {
      startSfx.play();

      start = true;
    }

    if (start) {
      startCounter--;
    }

    if (startCounter == 0) {
      HXP.scene = new MainScene();
    }

    // flash start game sign
    if (startCounter % 20 > 10) {
      startText.visible = false;
    } else {
      startText.visible = true;
    }

    super.update();
  }

}

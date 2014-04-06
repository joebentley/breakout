

import entities.Star;
import com.haxepunk.HXP;

class Starfield
{

  var spawnCounter:Int = 0;

  public function update()
  {
    spawnCounter++;

    if (spawnCounter % 4 == 0) {
      var scale:Int =  Math.round(Math.random() * 2 + 1);

      HXP.scene.add(new Star(Math.round(Math.random() * HXP.width),
            -100, // spawn above screen
            scale,
            (8 - (scale * 3)))); // bigger things go slower
    }
  }
}

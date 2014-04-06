import com.haxepunk.Scene;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.Sfx;

import entities.Player;
import entities.Ball;
import entities.Brick;
import entities.Bar;
import entities.BarBackdrop;

class MainScene extends Scene
{
  var music:Sfx;
  var starfield:Starfield = new Starfield();
  
  public var lives:Int = 3;

  public function new()
  {
    super();

    music = new Sfx("audio/song.ogg");
  }


  var colourMap = ["green", "yellow", "red", "blue"];

  public override function begin()
  {
    add(new Player(100, 430));
    add(new Ball(cast(HXP.width/2, Int), 250));

    add(new BarBackdrop(10, 10));
    add(new Bar(11, 11));


    var colour:Int = 0;
    // Generate brick layout, cycling through colours
    for (y in 1...7) {
      for (x in 1...9) {
        add(new Brick(x * 65, y * 30 + 30, colourMap[colour % 4]));
        colour++;
      }
    }


    music.play();
  }

  public override function update()
  {
    starfield.update();

    super.update();
  }

  public function spawnNewBall() 
  {
    // spawn new ball if lives left
    if (lives >= 0) {
      add(new Ball(cast(HXP.width/2, Int), 250));
    }

    lives--;
  }
}

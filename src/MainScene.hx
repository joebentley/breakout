import com.haxepunk.Scene;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.Sfx;

import entities.Player;
import entities.Ball;
import entities.Brick;
import entities.Bar;
import entities.BarBackdrop;

import haxe.format.JsonParser;

import Assets;

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

  var ballSpeed:Float;

  public override function begin()
  {
    add(new Player(100, 430));

    add(new BarBackdrop(10, 10));
    add(new Bar(11, 11));


    var colour:Int = 0;
    // Generate brick layout, cycling through colours
    /*for (y in 1...7) {
      for (x in 1...9) {
        add(new Brick(x * 65, y * 30 + 30, colourMap[colour % 4]));
        colour++;
      }
    }*/

    var level = new LevelOne();
    var levelOneData = JsonParser.parse(level.toString());

    var bricks:Array<Dynamic> = levelOneData.bricks;

    for (brick in bricks) {
      add(new Brick(brick.x, brick.y, brick.colour));
    }

    ballSpeed = levelOneData.speed;

    add(new Ball(cast(HXP.width/2, Int), 250, ballSpeed));


    // music.play();
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
      add(new Ball(cast(HXP.width/2, Int), 250, ballSpeed));
    }

    lives--;
  }
}

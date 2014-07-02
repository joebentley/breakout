import com.haxepunk.Scene;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.Sfx;

import entities.Player;
import entities.Ball;
import entities.Brick;
import entities.Bar;
import entities.BarBackdrop;
import entities.LivesText;
import entities.MoneyText;

import haxe.format.JsonParser;

import Assets;

class MainScene extends Scene
{
  var music:Sfx;
  var starfield:Starfield = new Starfield();
   
  var maxLevel:Int = 2;

  var ballSpeed:Float;
  var ballX:Int;
  var ballY:Int;

  var player:Player;


  public function new()
  {
    super();

    music = new Sfx("audio/song.ogg");
  }



  public override function begin()
  {
    add(new Player(100, 430));

    // only show bar if have upgrade
    if (Game.hasLaser) {
      add(new BarBackdrop(10, 10));
      add(new Bar(11, 11));
    }

    // add gui text
    add(new LivesText(500, 10));
    add(new MoneyText(500, 400));

    loadNewLevel(Game.level);
    
    // music.play();
  }

  public override function update()
  {
    starfield.update();


    // if no bricks are left in level, spawn the next level
    var bricks:Array<Brick> = new Array<Brick>();
    getType("brick", bricks);

    // if no bricks left
    if (bricks.length == 0) {

      /*if (level > 1) {
        var balls:Array<Ball> = new Array<Ball>();
        getType("ball", balls);

        for (ball in balls) {
          remove(ball);
        }
      }

      if (level > maxLevel) {
        level = 1;
      }*/

      //loadNewLevel(level);

      //level++;

      HXP.scene = new UpgradeScene();
    }


    Camera.update();

    super.update();
  }

  public function spawnNewBall() 
  { 
    // spawn new ball if lives left
    if (--Game.lives >= 0) {
      add(new Ball(ballX, ballY, ballSpeed));
    }
  }

  public function loadNewLevel(levelNumber:Int)
  {
    var levelData = Assets.loadLevel(levelNumber);
  
    var bricks:Array<Dynamic> = levelData.bricks;

    for (brick in bricks) {
      add(new Brick(brick.x, brick.y, brick.colour));
    }

    ballSpeed = levelData.ball.speed;
    ballX = levelData.ball.x;
    ballY = levelData.ball.y;

    add(new Ball(ballX, ballY, ballSpeed));
  }

}

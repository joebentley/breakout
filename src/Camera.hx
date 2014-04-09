import com.haxepunk.HXP;

class Camera
{

  static var shakingX = false;
  static var timeLeftX = 0;
  static var durationX = 0;
  static var startAmountX:Float = 0;
  static var endAmountX:Float = 0;
 
  static var shakingY = false;
  static var timeLeftY = 0;
  static var durationY = 0;
  static var startAmountY:Float = 0;
  static var endAmountY:Float = 0;
   
  public static function shakeX(startAmount:Float, endAmount:Float, duration:Int)
  {
    startAmountX = startAmount;
    endAmountX = endAmount;
    timeLeftX = duration;
    durationX = duration;

    shakingX = true;
  }

  public static function shakeY(startAmount:Float, endAmount:Float, duration:Int)
  {
    startAmountY = startAmount;
    endAmountY = endAmount;
    timeLeftY = duration;
    durationY = duration;

    shakingY = true;
  }




  public static function update()
  {
    if (shakingX == true) {
      HXP.camera.x = Math.sin(2 * Math.PI * 10 * ((endAmountX - startAmountX) / timeLeftX)) * durationX; 
      timeLeftX--;
    }

    if (timeLeftX == 0) {
      shakingX = false;

      HXP.camera.x = 0;
    }

    if (shakingY == true) {
      HXP.camera.y = Math.sin(2 * Math.PI * 10 * ((endAmountY - startAmountY) / timeLeftY)) * durationY; 
      timeLeftY--;
    }

    if (timeLeftY == 0) {
      shakingY = false;

      HXP.camera.y = 0;
    }
  }
}

package utils;


class Vector2
{
  public var x:Float;
  public var y:Float;

  public function new()
  {
    x = 0;
    y = 0;
  }

  public function length():Float
  {
    return Math.sqrt(Math.pow(x, 2) + Math.pow(y, 2));
  }

}

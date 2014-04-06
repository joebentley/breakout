package utils;


class Vector2
{
  public var x:Float;
  public var y:Float;

  public function new(x:Float = 0, y:Float = 0)
  {
    this.x = x;
    this.y = y;
  }

  public function length():Float
  {
    return Math.sqrt(Math.pow(x, 2) + Math.pow(y, 2));
  }

  public function clone():Vector2
  {
    return new Vector2(x, y);
  }

}

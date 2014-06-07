

import com.haxepunk.Json;



class Assets {

  public static function loadLevel(level:Int):Dynamic {
    // return level depending on level requested
    
    var levelNum = "one";

    switch (level) {
      case 1:
        levelNum = "one";
      case 2:
        levelNum = "two";
    }


    return Json.getJSON("data/" + levelNum + ".json");
  }
}



import com.haxepunk.Json;


@:file("assets/data/one.json")
class LevelOne extends flash.utils.ByteArray {} 

@:file("assets/data/two.json")
class LevelTwo extends flash.utils.ByteArray {} 


class Assets {

  public static function loadLevel(level:Int):Dynamic {
    // return level depending on level requested
    
    var levelRaw = "";

    switch (level) {
      case 1:
        levelRaw = (new LevelOne()).toString();
      case 2:
        levelRaw = (new LevelTwo()).toString();
    }

    //var levelData = haxe.Json.parse(levelRaw);

    var levelData = Json.getJSON("data/two.json");

    return levelData;

  }
}

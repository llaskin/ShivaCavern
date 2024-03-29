// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  A magical mural is visible on the east wall"
    "There seems to be writing in a corner of the room");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        ({"wall", "mural", "magical mural", "east wall"}) : "The magical mural depicts your betrayal",
        ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room38",
	"northwest" : SHIVA_ROOM + "room31",
    "west" : SHIVA_ROOM + "room47",
	"south" : SHIVA_ROOM + "room52",
    ]));
}
//Perhaps add something to the mural?  Perhaps a monster appears and attacks?  An assassin of some sort?

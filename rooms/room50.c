// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  There are carvings in the west wall and in the north corner");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	({"west wall", "carvings"}) : "A group of draconic faces have been carved into the wall",
    	({"corner", "north corner"}) : "Someone has scrawled \"Beware the basilisk\" in the corner",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room36",
	"west" : SHIVA_ROOM + "room48",
	"southwest" : SHIVA_ROOM + "room55",
	"northeast" : SHIVA_ROOM + "room49",
	"southeast" : SHIVA_ROOM + "room57",
    ]));
}
//A group of draconic faces have been carved into the west wall, and someone has scrawled "Beware the basilisk" on the north wall

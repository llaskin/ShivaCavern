// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  The ceiling is covered with cracks.  "
    "There are carvings in the north wall");
    set_items(([
	"cracks" : "The ceiling is covered with cracks.  The room looks like it could cave in",
	"carvings" : "There are several monstrous faces carved into the wall",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room44",
	"northwest" : SHIVA_ROOM + "room47",
	"south" : SHIVA_ROOM + "room61",
    ]));
}
//A group of monstrous faces have been carved into the north wall, and the ceiling is covered with cracks

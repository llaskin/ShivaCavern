// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  There are many exits from this room. One door heading east seems to have been started but never finished.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"unfinished door" : "The door to the east seems to be half done.  The bricks have not been carved out of the wall."
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVA_ROOM + "room16",
	"north" : SHIVA_ROOM + "room17",
    "northeast" : SHIVA_ROOM + "room9",
    "west" : SHIVA_ROOM + "room20",
	"southwest" : SHIVA_ROOM + "room28",
	"southeast" : SHIVA_ROOM + "room29",

    ]));
}
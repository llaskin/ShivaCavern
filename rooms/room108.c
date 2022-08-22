// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Bones litter the floor, leftover from some animal's meal.");
    set_items(([
        ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"bones" : "Something seems to have been gnawing on these",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVA_ROOM + "room109",
   ]));
}

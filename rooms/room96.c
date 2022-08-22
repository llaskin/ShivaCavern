// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Drops of water fall from the ceiling, sitting at the tops of the stalactites before falling into a depression on the floor.");
    set_items(([
        ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        ({"depression", "floor"}) : "A small puddle of water pools on the floor below each stalactite",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVA_ROOM + "room90",
	"west" : SHIVA_ROOM + "room95",
    ]));
}

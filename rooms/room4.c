// by Lord
// room, file=room4.c

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  A rope ascends to a catwalk"
    "hanging between the north and south walls, and a simple"
    "wooden table and lantern sit in the north-west corner"
    "of the room");
    set_items(([
        "({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        "rope" : "The rope ascends towards a catwalk above you",
        "table" : "This is a simple table",
        "lantern" : "The lantern is lit",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVA_ROOM + "room3.c",
    ]));
}
//

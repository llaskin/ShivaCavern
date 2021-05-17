// by Lord
// room, file=room4.c

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  A rope ascends to a catwalk"
    "hanging between the north and south walls, and a simple"
    "wooden table and lantern sit in the north-west corner"
    "of the room");
    set_items(([
        "item1" : "desc1",
        "item2" : "desc2",
        "item3" : "desc3",
        ({"item4", "item5", "item6"}):
            "desc4",
        ({"item7", "item8"}) : "desc5",
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

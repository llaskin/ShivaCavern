// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings. A phosphorescent fungus lines "
    "the walls giving off a dull light.");
    set_items(([
        ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        "fungus" : "The fungus glows lightly like a night light",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVA_ROOM + "room82",
	"east" : SHIVA_ROOM + "room93",
    ]));
}
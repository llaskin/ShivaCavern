// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Calcium deposits collect below most of the stalactites.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	({"calcium", "deposits", "calcium deposits"}) : "Dusty piles of calcium lie on the floor around the room",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room13",
	"east" : SHIVA_ROOM + "room23",
	"southeast" : SHIVA_ROOM + "room26",
	"south" : SHIVA_ROOM + "room30",
    ]));
}
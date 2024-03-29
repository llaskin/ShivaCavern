// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  A tile mosaic of ancient "
    "mythology covers the floor.  There is writing on the wall");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"wall" : "Someone has scrawled \"Masym died here\" on the west wall"
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVA_ROOM + "room32",
	"southwest" : SHIVA_ROOM + "room40",
	"south" : SHIVA_ROOM + "room48",
    ]));
}
//A tile mosaic of ancient mythology covers the floor, and someone has scrawled "Masym died here" on the west wall

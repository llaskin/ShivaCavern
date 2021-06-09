// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
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
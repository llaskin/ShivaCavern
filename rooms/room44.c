// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

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
	"north" : SHIVAROOM + "room38",
	"west1" : SHIVAROOM + "room31",
    "west2" : SHIVAROOM + "room47",
	"south" : SHIVAROOM + "room52",
    ]));
}
//A magical mural on the east wall depicts the betrayal of whomever views it, and someone has scrawled "The walls listen" on the east wall

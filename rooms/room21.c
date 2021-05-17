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
	"north1" : SHIVAROOM + "room16",
	"north3" : SHIVAROOM + "room17",
    "north4" : SHIVAROOM + "room9",
    "west" : SHIVAROOM + "room20",
	"south1" : SHIVAROOM + "room28",
	"south2" : SHIVAROOM + "room29",

    ]));
}
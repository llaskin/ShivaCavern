// by Lord
// room, file=room20

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
	"north" : SHIVAROOM + "room15",
	"north1" : SHIVAROOM + "room16",
	"west" : SHIVAROOM + "room19",
	"east" : SHIVAROOM + "room21",
    "south" : SHIVAROOM + "room27",
    "south1" : SHIVAROOM + "room28",
    ]));
}
//Someone has scrawled "Ran out of arrows" in blood on the south wall, and a charred wooden shield lies in the south-west corner of the room

// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  The ceiling is high above your head with two distinct domes in the roof");
    set_items(([
       ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
       "dome" : "These domed ceilings have been carved out of the ceilings by repeated flood cycles over the years"

    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room100",
	"northwest" : SHIVA_ROOM + "room99",
	"east" : SHIVA_ROOM + "room112",
    ]));
}

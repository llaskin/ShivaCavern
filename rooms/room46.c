// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  There is a tile mosaic on the floor"
    "There is a set of stairs to a balcony on the north wall");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	({"mosaic"}) : "Geometric patterns cover the floor",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVA_ROOM + "room42",
	"southeast" : SHIVA_ROOM + "room51",
	"south" : SHIVA_ROOM + "room56",
	"stairs" : SHIVA_ROOM + "balcony46"
    ]));
    }
    void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());

}
//A stair ascends to a balcony hanging from the north wall, and a tile mosaic of geometric patterns covers the floor

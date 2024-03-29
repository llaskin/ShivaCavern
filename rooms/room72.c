// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  There is a bookcase on one wall");
    set_items(([
    	"bookcase" : "It's full of books!",
    	 ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));
    set_properties(([
        "light" : SHIVA_LIGHT,
        "night light" : 0,
    ]));
    set_exits(([
        "west" : SHIVA_ROOM + "name",
        "east" : SHIVA_ROOM + "room73",
        "southeast" : SHIVA_ROOM + "room79",
        "south" : SHIVA_ROOM + "room86",
    ]));
}//TODO

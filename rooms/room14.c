// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  There is an altar on the"
    "north side of the room.  A pile of sundered shields"
    "lies in the south east corner of the room");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"altar" : "This is an altar of evil",
    	"shields" : "These shields are destroyed from abuse"

    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room8",
	"west" : SHIVA_ROOM + "room13",
	"south" : SHIVA_ROOM + "room23",
    ]));
}

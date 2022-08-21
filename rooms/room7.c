// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  The ceiling is high above "
    "you, and an iron sarcophagus sits in the north-east "
    "corner of the room");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"sarcophagus": "This iron sarcophagus is sealed shut"
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVA_ROOM + "room8.c",
	"south" : SHIVA_ROOM + "room9.c",
    ]));
}
//

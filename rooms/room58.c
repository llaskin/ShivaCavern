// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  There is a carving in one of"
     "the walls");
    set_items(([
	"carving" : "A mouth of a demonic face jumps out from the stone",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVA_ROOM + "room49",
	"east" : SHIVA_ROOM + "room62",
    "south" : SHIVA_ROOM + "room66",
    ]));
}//TODO

// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
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
	"northwest" : SHIVAROOM + "room49",
	"east" : SHIVAROOM + "room62",
    "south" : SHIVAROOM + "room66",
    ]));
}
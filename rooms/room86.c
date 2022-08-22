// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  A narrow ledge runs along the "
    "walls. Several statues are around the room");
    set_items(([
	"ledge" : "The ledge runs around the north and west walls",
	({"statue", "statues"}) : "The statues are missing their heads",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room72",
	"northwest" : SHIVA_ROOM + "room78",
	"northeast" : SHIVA_ROOM + "room79",
	"southwest" : SHIVA_ROOM + "room93",
	"southeast" : SHIVA_ROOM + "room92",
	"south" : SHIVA_ROOM + "room94",
    ]));
}//TODO

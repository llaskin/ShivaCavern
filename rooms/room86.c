// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
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
	"north" : SHIVAROOM + "room72",
	"northwest" : SHIVAROOM + "room78",
	"northeast" : SHIVAROOM + "room79",
	"southwest" : SHIVAROOM + "room93",
	"southeast" : SHIVAROOM + "room92",
	"south" : SHIVAROOM + "room94",
    ]));
}
// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings. A narrow ledge runs along the walls. ");
    set_smell("default", "The smell of sulfur fills the room")
    set_items(([
	"ledge" : "This ledge runs along the walls",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northeast" : SHIVAROOM + "room53",
    ]));
}
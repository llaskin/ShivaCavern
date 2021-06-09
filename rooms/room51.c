// by Lord
// room, file=room51


#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
       "in the floor and ceilings. Several iron cages hang from "
       "some of the stalagmites.");
    set_items(([
	"iron cages" : "These empty cages once looked like they housed prisoners",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVA_ROOM + "room46",
	"west" : SHIVA_ROOM + "room56",
	"south" : SHIVA_ROOM + "room59"

    ]));
}
//Several iron cages are scattered throughout the room, and several pieces of rotten bread are scattered throughout the room

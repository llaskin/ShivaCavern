// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.");
    set_items(([
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room73",
	"northwest" : SHIVA_ROOM + "room72",
	"southwest" : SHIVA_ROOM + "room86",
	"south" : SHIVA_ROOM + "room92",
    ]));
}//TODO

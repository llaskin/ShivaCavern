// by Lord
// room, file=room1.c

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites in the floor and ceilings.  There are some scribbles on the west wall");
    set_night_long("The room has stalagtites and stalagmites in the floor and ceilings.  There are some scribbles on the west wall");
    set_items(([
	({"wall", "west wall"}):
		"Someone has scrawled \"Kill them with ice\" on the north wall, and the floor is covered with dust",
	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVA_ROOM + "room2.c",
	"south" : SHIVA_ROOM + "room10.c",
    ]));
}
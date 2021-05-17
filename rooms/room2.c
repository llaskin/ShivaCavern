// by Lord
// room, file=room2.c

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
	"light" : 1,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : "shivacavern/rooms/room1.c",
	"east" : "shivacavern/rooms/room3.c",
    ]));
}
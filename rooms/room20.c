// by Lord
// room, file=room20

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("short description");
    set_long("day long description");
    set_items(([
	"item1" : "desc1",
	"item2" : "desc2",
	"item3" : "desc3",
	({"item4", "item5", "item6"}):
		"desc4",
	({"item7", "item8"}) : "desc5",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room15",
	"north1" : SHIVAROOM + "room16",
	"west" : SHIVAROOM + "room19",
	"east" : SHIVAROOM + "room21",
    "south" : SHIVAROOM + "room27",
    "south1" : SHIVAROOM + "room28",
    ]));
}
//Someone has scrawled "Ran out of arrows" in blood on the south wall, and a charred wooden shield lies in the south-west corner of the room

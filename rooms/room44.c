// by Lord
// room, file=filename    

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
	"north" : SHIVAROOM + "room38",
	"west1" : SHIVAROOM + "room31",
    "west2" : SHIVAROOM + "room47",
	"south" : SHIVAROOM + "room52",
    ]));
}
//A magical mural on the east wall depicts the betrayal of whomever views it, and someone has scrawled "The walls listen" on the east wall

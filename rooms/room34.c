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
	"south" : SHIVAROOM + "room40",
	]));
}
void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());
}
//Numerous pillars line the east wall, and a crater has been blasted into the floor in the east side of the room

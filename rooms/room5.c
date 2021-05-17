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
	"light" : 1,
	"night light" : 0,
    ]));
    set_exits(([
	"south" : SHIVA_ROOMS + "room16.c",
//	"direction2" : "shivacavern/rooms/name2",
    ]));
}
    void reset() {
    if(!present("hugeCentipede"))
	new(SHIVA_MONSTERS + "hugeCentipede")->move(this_object());

}
//Several alcoves are cut into the east and west walls, and several pieces of rotting wood are scattered throughout the room
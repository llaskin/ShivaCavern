// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("short description");
    set_long("night long description");
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
	"north" : SHIVAROOM + "room7",
	"west" : SHIVAROOM + "room6",
	"east" : SHIVAROOM + "room8",
	"east2" : SHIVAROOM + "room13",
	"south" : SHIVAROOM + "room21",
	"south3" : SHIVAROOM + "room22",
    ]));
    }
    void reset() {
    if(!present("tinyMonstrousCentipede"))
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	//TODO: add 12 of these bad boys
}
//Someone has scrawled "They ate Borgga" in dwarvish runes on the west wall, and an unidentifiable odor fills the room

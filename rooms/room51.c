// by Lord
// room, file=room51


anclude <std.h>
anclude <shivaCaverns.h>

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
	"northwest" : SHIVAROOM + "room46",
	"west" : SHIVAROOM + "room56",
	"south" : SHIVAROOM + "room59"

    ]));
}
//Several iron cages are scattered throughout the room, and several pieces of rotten bread are scattered throughout the room

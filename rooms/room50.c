// by Lord
// room, file=filename    

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
	"north" : SHIVAROOM + "room36",
	"west1" : SHIVAROOM + "room48",
	"west2" : SHIVAROOM + "room55",
	"east1" : SHIVAROOM + "room49",
	"east2" : SHIVAROOM + "room57",
    ]));
}
//A group of draconic faces have been carved into the west wall, and someone has scrawled "Beware the basilisk" on the north wall

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
	"north1" : SHIVAROOM + "room16",
	"north3" : SHIVAROOM + "room17",
    "north4" : SHIVAROOM + "room9",
    "west" : SHIVAROOM + "room20",
	"south1" : SHIVAROOM + "room28",
	"south2" : SHIVAROOM + "room29",

    ]));
}
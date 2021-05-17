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
	"north" : SHIVAROOM + "room27",
	"west" : SHIVAROOM + "room36",
	"east1" : SHIVAROOM + "room28",
	"east2" : SHIVAROOM + "room45",
	"south" : SHIVAROOM + "room49",

    ]));
    }
    void reset() {
    if(!present("shrieker"))
	new(SHIVA_MONSTERS + "shrieker")->move(this_object());

}
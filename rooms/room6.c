// by Lord
// room, file=room6

#include <std.h>
#include  <shivaCaverns.h>

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
	"east" : SHIVA_ROOM + "room9.c",
	"south" : SHIVA_ROOM + "room17.c",
    ]));
    }
    void reset() {
    if(!present("etherealMarauder"))
	new(SHIVA_MONSTERS + "etherealMarauder")->move(this_object());

}
// by Lord
// room, file=room3.c

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("short description");
    set_day_long("day long description");
    set_night_long("night long description");
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
	"west" : SHIVA_ROOM + "room2.c",
	"east" : SHIVA_ROOM + "room4.c",
    ]));
    }
    void reset() {
        if(!present("mediumMonstrousSpider"))
    	new("shivacavern/monsters/mediumMonstrousSpider")->move(this_object());
    }
// by Lord
// room, file=room10.c

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room1.c",
	"south" : SHIVA_ROOM + "room24.c",
    ]));
    }
    void reset() {
        if(!present("mediumMonstrousSpider"))
    	new("shivacavern/monsters/mediumMonstrousSpider")->move(this_object());
    }
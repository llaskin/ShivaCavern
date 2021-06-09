// by Lord
// room, file=filename    

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
	"north" : SHIVA_ROOM + "room14",
	"northwest" : SHIVA_ROOM + "room13",
	"west" : SHIVA_ROOM + "room25",
	"south" : SHIVA_ROOM + "room26",
    ]));
    }
    void reset() {
    if(!present("largeMonstrousSpider"))
	new(SHIVA_MONSTERS + "largeMonstrousSpider")->move(this_object());

}
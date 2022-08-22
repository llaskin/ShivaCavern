// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  A formation in the shape of a maple leaf hangs from the ceiling.");
    set_items(([
            ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
            "maple leaf": "This rock is shaped like a leaf that just fell from a maple tree"
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVA_ROOM + "room54",
	"southwest" : SHIVA_ROOM + "name67",
    "southeast" : SHIVA_ROOM + "room61",

    ]));
    }
    void reset() {
    if(!present("largeMonstrousCentipede"))
	new(SHIVA_MONSTERS + "largeMonstrousCentipede")->move(this_object());

}

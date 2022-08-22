// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Some tufts of fur lie in the corner.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        "fur":"This light fur looks like it could fly around the room.",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room31",
	"east" : SHIVA_ROOM + "room44",
	"southeast" : SHIVA_ROOM + "room52",
    ]));
    }
    void reset() {
    if(!present("krenshar"))
	new(SHIVA_MONSTERS + "krenshar")->move(this_object());

}

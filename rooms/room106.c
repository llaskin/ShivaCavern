// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Several iron cages hang from"
    "the ceiling.");
    set_items(([
       ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        ({"cages", "iron cages"}) : "These cages stand open, something seens to have escaped long ago.",
    ]));
    set_properties(([
        "light" : SHIVA_LIGHT,
        "night light" : 0,
    ]));
    set_exits(([
    	"west" : SHIVA_ROOM + "room93",
    ]));
    }
    void reset() {
    if(!present("tinyMonstrousCentipede"))
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
}

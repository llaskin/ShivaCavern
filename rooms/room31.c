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
	"east" : SHIVAROOM + "room38",
	"southeast" : SHIVAROOM + "room44",
	"south" : SHIVAROOM + "room47",
    ]));
}
void reset() {
    if(!present("smallMonstrousCentipede"))
	new(SHIVA_MONSTERS + "smallMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "smallMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "smallMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "smallMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "smallMonstrousCentipede")->move(this_object());
    }
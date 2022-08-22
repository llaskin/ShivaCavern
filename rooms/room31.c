// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  ");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));
    set_listen("default", "Repetitive clicking comes from the west wall")


    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVA_ROOM + "room38",
	"southeast" : SHIVA_ROOM + "room44",
	"south" : SHIVA_ROOM + "room47",
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
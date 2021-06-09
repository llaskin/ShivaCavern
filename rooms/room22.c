// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  The floor is covered in "
    "square tiles which alternate beween black and white.");
    set_listen("default", "A knocking sound fills the room");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVA_ROOM + "room9",
    "east" : SHIVA_ROOM + "room30",
    ]));
    }
    void reset() {
    if(!present("tinyMonstrousCentipede"))
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
    new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
    new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
    new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
    new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
}
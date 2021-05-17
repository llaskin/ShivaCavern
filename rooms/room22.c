// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

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
	"north" : SHIVAROOM + "room9",
    "east" : SHIVAROOM + "room30",
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
//The floor is covered in square tiles, alternating white and black, and knocking fills the room

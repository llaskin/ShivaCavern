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
	"north" : SHIVAROOM + "room7",
	"west" : SHIVAROOM + "room6",
	"east" : SHIVAROOM + "room8",
	"east2" : SHIVAROOM + "room13",
	"south" : SHIVAROOM + "room21",
	"south3" : SHIVAROOM + "room22",
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
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
	new(SHIVA_MONSTERS + "tinyMonstrousCentipede")->move(this_object());
}
//Someone has scrawled "They ate Borgga" in dwarvish runes on the west wall, and an unidentifiable odor fills the room

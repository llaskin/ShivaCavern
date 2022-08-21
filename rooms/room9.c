// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Someone has scrawled "
    "something on the west wall.");
    set_smell("An unidentifiable odor fills the room");
    set_sound("The sound of water can be heard from the west");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"west wall" : "There is an inscription here: \"They"
    	"ate Borgga\""
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room7",
	"west" : SHIVA_ROOM + "room6",
	"east" : SHIVA_ROOM + "room13",
	"northeast" : SHIVA_ROOM + "room8",
	"southwest" : SHIVA_ROOM + "room21",
	"southeast" : SHIVA_ROOM + "room22",
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

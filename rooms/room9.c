// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  Someone has scrawled "
    "something on the west wall.  An unidentifiable odor "
    "fills the room"
    );
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

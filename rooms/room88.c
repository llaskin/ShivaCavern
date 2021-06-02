// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  A large kiln and coal bin are"
    "in the corner.  There is writing on the wall.");
    set_items(([
	"writing" : "There is a scrawl on the wall that says \"No, I said it had eleven eyes\"",
	"kiln" : "This kiln was used to fire clay",
	({"coal bin", "coal", "bin"}):
		"This bin is full of coal for the kiln",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room84",
	"west" : SHIVAROOM + "room87",
	"south" : SHIVAROOM + "room95",
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
}
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

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room48",
	"west" : SHIVAROOM + "room53",
	"northeast" : SHIVAROOM + "room50"
	"southwest" : SHIVAROOM + "room63"
	"southeast" : SHIVAROOM + "room64"
    ]));
    }
    void reset() {
    if(!present("largeMonstrousCentipede"))
	new(SHIVA_MONSTERS + "largeMonstrousCentipede")->move(this_object());

}
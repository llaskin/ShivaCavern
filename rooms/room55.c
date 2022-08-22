// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.");
    set_items(([

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room48",
	"west" : SHIVA_ROOM + "room53",
	"northeast" : SHIVA_ROOM + "room50"
	"southwest" : SHIVA_ROOM + "room63"
	"southeast" : SHIVA_ROOM + "room64"
    ]));
    }
    void reset() {
    if(!present("largeMonstrousCentipede"))
	new(SHIVA_MONSTERS + "largeMonstrousCentipede")->move(this_object());

}//TODO

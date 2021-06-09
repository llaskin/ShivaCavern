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
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVA_ROOM + "room54",
	"southwest" : SHIVA_ROOM + "name67",
    "southeast" : SHIVA_ROOM + "room61",

    ]));
    }
    void reset() {
    if(!present("largeMonstrousCentipede"))
	new(SHIVA_MONSTERS + "largeMonstrousCentipede")->move(this_object());

}
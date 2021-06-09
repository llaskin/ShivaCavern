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
	"north" : SHIVAROOM + "room58",
	"east" : SHIVAROOM + "room62",
    ]));
    }
    void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());

}
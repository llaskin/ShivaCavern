// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  There are a series of masks"
    "hanging from the wall");
    set_items(([
	({"mask", "masks"}) : "A set of demonic war masks hangs here",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVAROOM + "room63",
	"northwest" : SHIVAROOM + "room55",
	"east" : SHIVAROOM + "room65",
	"south" : SHIVAROOM + "room76",
    ]));
}
    void reset() {
    if(!present("rustedAxe"))
	new(SHIVA_MISC + "rustedAxe")->move(this_object());
}
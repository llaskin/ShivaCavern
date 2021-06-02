// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  There is a bookcase on one wall");
    set_items(([
	"bookcase" : "It's full of books!",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVAROOM + "name",
	"east" : SHIVAROOM + "room73",
	"southeast" : SHIVAROOM + "room79",
	"south" : SHIVAROOM + "room86",
    ]));
}
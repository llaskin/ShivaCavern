// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  Trash can be seen falling from a"
    "chute above your head.  There is writing on the wall");
    set_items(([
	"chute" : "Gross! A garbage chute!",
	({"writing", "wall"}) : "The writing reads \"Abandon all hope\"",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room62",
    ]));
}
//A chute falls into the room from above, and someone
//  has scrawled "Abandon all hope" on the west wall

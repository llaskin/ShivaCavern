// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  A magical mirror hangs "
    "on the wall.  A cube of solid stone stands in the "
    "south east corner of the room.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        ({"mirror", "magic mirror"}) : "This mirror might answer any questions you ask it",
        ({"cube", "solid stone"}) : "This ashler has been hewn smooth, over years perhaps",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVA_ROOM + "room12",
	"north" : SHIVA_ROOM + "room15",
    "west" : SHIVA_ROOM + "room18",
    "east" : SHIVA_ROOM + "room20",
    "southwest" : SHIVA_ROOM + "room36",
    "southeast" : SHIVA_ROOM + "room37",
    ]));
    }
    void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());

}

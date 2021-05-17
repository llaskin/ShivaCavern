// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  A magical mirror hangs "
    "on the wall.  A cube of solid stone stands in the "
    "south east corner of the room.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        ({"mirror", "magic mirror"}) : "This mirror will answer any questions you ask it",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVAROOM + "room12",
	"north" : SHIVAROOM + "room15",
    "west" : SHIVAROOM + "room18",
    "east" : SHIVAROOM + "room20",
    "southwest" : SHIVAROOM + "room36",
    "southeast" : SHIVAROOM + "room37",
    ]));
    }
    void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());

}
//TODO: deed or quest with mirror?
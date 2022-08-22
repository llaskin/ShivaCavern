// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("This gargantuan room has a bright fire "
    "burning in the middle.  A ruined siege weapon sits in "
    "the southeast corner of the room.");
    set_smell("A sour odor fills the room");
    set_listen("Chimes play around you")
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	({"siege weapon"}): "This is a destroyed siege weapon",

    ]));

    set_properties(([
	"light" : SHIVA_LIGHT+2,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room5",
	"west" : SHIVA_ROOM + "room15",
    "south" : SHIVA_ROOM + "room20",
    "southeast" : SHIVA_ROOM + "room21",
    ]));
}

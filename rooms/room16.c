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
    "the southeast corner of the room.  A sour odor fills "
    "the center of the room.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	({"siege weapon"}): "This is a destroyed siege weapon"
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT+2,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room5",
	"west" : SHIVAROOM + "room15",
    "south" : SHIVAROOM + "room20",
    "south2" : SHIVAROOM + "room21",
    ]));
}

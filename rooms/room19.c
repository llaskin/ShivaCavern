// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room12",
	"north2" : SHIVAROOM + "room15",
    "west" : SHIVAROOM + "room18",
    "east" : SHIVAROOM + "room20",
    "south" : SHIVAROOM + "room36",
    "south2" : SHIVAROOM + "room37",
    ]));
    }
    void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());

}
//A magical mirror on the west wall answers questions with lies and falsehoods, and a cube of solid stone stands in the south-east corner of the room

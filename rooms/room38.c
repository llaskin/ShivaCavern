// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  There is a small well in the"
    "corner of the room.  There is some writing on the wall");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	({"wall", "writing"}) : "Someone has scrawled \"Don't lose your head\" on the wall",
    	({"well"}) : "This well is dry",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVAROOM + "room31",
	"south" : SHIVAROOM + "room44",
    ]));
    }
    void reset() {
    if(!present("krenshar"))
	new(SHIVA_MONSTERS + "krenshar")->move(this_object());

}
//A well lies in the south-west corner of the room, and someone has scrawled "Don't lose your head" in blood on the south wall

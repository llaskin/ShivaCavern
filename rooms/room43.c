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
	"north1" : SHIVAROOM + "room34",
	"north2" : SHIVAROOM + "room30",
    "west" : SHIVAROOM + "room42",
	"south" : SHIVAROOM + "room54",
    ]));
    }
    void reset() {
    if(!present("krenshar"))
	new(SHIVA_MONSTERS + "krenshar")->move(this_object());

}//A magical altar of a goddess of thieves in the south-west corner of the room causes unease in any lawful creature within 30 feet, and a pile of spoiled meat lies in the center of the room

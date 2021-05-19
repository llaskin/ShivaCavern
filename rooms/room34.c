// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  Numerous pillars line the east"
    "wall.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"pillars" : "These pillars along the east wall line the edge of a massive crater",
    	"crater" : "The crater has charred remains of a dwarf in it",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"south" : SHIVAROOM + "room43",
	]));
}
void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());
}
//Numerous pillars line the east wall, and a crater has been blasted into the floor in the east side of the room

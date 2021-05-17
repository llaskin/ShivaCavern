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
	"north1" : SHIVAROOM + "room20",
	"north2" : SHIVAROOM + "room21",
	"west1" : SHIVAROOM + "room27",
	"west2" : SHIVAROOM + "room41",
	"east" : SHIVAROOM + "room29",
    ]));
    }
    void reset() {
    if(!present("mediumMonstrousSpider"))
	new(SHIVA_MONSTERS + "mediumMonstrousSpider")->move(this_object());

}//Someone has scrawled "Praise Asar the Sorceror" on the south wall, and sporadic knocking can be faintly heard near the south wall
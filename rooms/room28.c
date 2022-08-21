// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Someone has scrawled \"Praise "
    "Asar the Sorceror\" on the south wall." );
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));
    set_listen("default", "Sporadic knocking can be faintly heard from the south wall.")

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVA_ROOM + "room20",
	"northeast" : SHIVA_ROOM + "room21",
	"west" : SHIVA_ROOM + "room27",
	"southwest" : SHIVA_ROOM + "room41",
	"east" : SHIVA_ROOM + "room29",
    ]));
    }
    void reset() {
    if(!present("mediumMonstrousSpider"))
	new(SHIVA_MONSTERS + "mediumMonstrousSpider")->move(this_object());

}//Someone has scrawled "Praise Asar the Sorceror" on the south wall, and sporadic knocking can be faintly heard near the south wall

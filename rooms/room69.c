// by Lord
// room, file=room69.c

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  There is some small writing above "
    "the door to the east.");
    set_items(([
     ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
	"writing" : "The writing says \"The Lions of Naramunz killed a white dragon here\"",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVA_ROOM + "room67",
    "east" : SHIVA_ROOM + "room70",
    ]));
    }
    void reset() {
    if(!present("mediumMonstrousSpider"))
	new(SHIVA_MONSTERS + "mediumMonstrousSpider")->move(this_object());

}
//A chute falls into the room from above, and someone has scrawled "The Lions of Naramunz killed a white dragon here" on the east wall
//TODO

// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;


void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings. Several alcoves are cut into"
     " the east and west walls, and several pieces of "
     "rotting wood are scattered throughout the room");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        "alcove" : "The alcove is cut into the wall",
        "alcoves" : "Multiple alcovers are cut into each wall",
         ({"wood", "rotting wood"}) : "These rotten pieces of wood seem useless",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"south" : SHIVA_ROOM + "room16.c",
    ]));
}
    void reset() {
    if(!present("hugeCentipede"))
	new(SHIVA_MONSTERS + "hugeCentipede")->move(this_object());

}
//Several alcoves are cut into the east and west walls, and several pieces of rotting wood are scattered throughout the room
// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Blood spatters are seen all "
    "over the walls.");
    set_smell("A stench of mold fills the room.")
    set_items(([
        ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        ({"blood", "walls"}) : "The blood is splattered indiscriminately around the room",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room92",
	"west" : SHIVA_ROOM + "room108",
    ]));
}

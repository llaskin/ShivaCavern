// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  An iron shackle hanges from"
    "the ceiling");
    set_items(([
	"shackle" : "It looks like someone was once imprisoned here",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room91",
    "south" : SHIVA_ROOM + "room111",
    ]));
}
//Someone has scrawled "straight, straight, door, left"
//on the north wall, and an iron chain hangs from the
//  ceiling in the center of the room
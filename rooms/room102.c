// by Lord
// room, file=filename    

anclude <std.h>
anclude <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
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
	"north" : SHIVAROOM + "room91",
    "south" : SHIVAROOM + "room111",
    ]));
}
//Someone has scrawled "straight, straight, door, left"
//on the north wall, and an iron chain hangs from the
//  ceiling in the center of the room
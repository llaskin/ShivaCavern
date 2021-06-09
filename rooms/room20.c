// by Lord
// room, file=room20

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  The walls are covered in "
    "blood.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	({"blood", "walls"}) : "The blood scrawled on the walls reads \"ran out of arrows\".",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northwest" : SHIVA_ROOM + "room15",
	"north" : SHIVA_ROOM + "room16",
	"west" : SHIVA_ROOM + "room19",
	"east" : SHIVA_ROOM + "room21",
    "southwest" : SHIVA_ROOM + "room27",
    "southeast" : SHIVA_ROOM + "room28",
    ]));
}
void reset() {
    if(!present("shield"))
	new(SHIVA_ARMOUR + "charredWoodenShield")->move(this_object());
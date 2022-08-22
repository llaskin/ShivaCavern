// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  There are scratches on the east wall");
    set_items(([
	    ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
	    "scratches":"These scratches look like they were created by a scared adventurer"
    ]));
    set_properties(([
        "light" : SHIVA_LIGHT,
        "night light" : 0,
    ]));
    set_exits(([
        "north" : SHIVA_ROOM + "room85",
        "southwest" : SHIVA_ROOM + "room95",
        "southeast" : SHIVA_ROOM + "room96",
    ]));
}
void reset() {
    if(!present("shrieker"))
	new(SHIVA_MONSTERS + "shrieker")->move(this_object());
}//TODO

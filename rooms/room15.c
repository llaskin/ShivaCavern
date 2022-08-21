// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  There is writing on the "
    "north and west walls.");
    set_sound("Chimes can be heard coming from the east")
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	({"walls", "north wall", "west wall"}) : "Arcane runes appear on the wall here.  They have a small glow to them",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVA_ROOM + "room16",
	"south" : SHIVA_ROOM + "room19",
	"southeast" : SHIVA_ROOM + "room20",
    ]));
    }
    void reset() {
    if(!present("shrieker"))
	new(SHIVA_MONSTERS + "shrieker")->move(this_object());

}
//TODO: Add something to the runes...maybe a deed start?
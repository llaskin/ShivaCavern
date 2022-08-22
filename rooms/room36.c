// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  The largest stalagmite you have seen yet runs floor to ceiling.  It's so big you can't fit your arms around it.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"stalagmite" : "This stalagmite must have been growing for millions of years.  It's HUGE!"
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northeast" : SHIVA_ROOM + "room19",
	"east" : SHIVA_ROOM + "room37",
	"southeast" : SHIVA_ROOM + "room41",
	"southwest" : SHIVA_ROOM + "room49",
	"south" : SHIVA_ROOM + "room50",
    ]));
    }
    void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());

}
// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  There is writing scratched "
    "into the floor.");
    set_items(([
    ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
	({"writing", "floor"}) : "Someone has scrawled \"The cleric will betray you\"",
    ]));
    set_properties(([
    	"light" : SHIVA_LIGHT,
    	"night light" : 0,
    ]));
    set_exits(([
    	"east" : SHIVA_ROOM + "room100",
    	"southeast" : SHIVA_ROOM + "room104",
    ]));
    }
    void reset() {
        if(!present("shrieker"))
    	new(SHIVA_MONSTERS + "shrieker")->move(this_object());
}

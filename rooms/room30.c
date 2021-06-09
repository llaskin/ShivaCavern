// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  A narrow pit covered by iron"
    "bars lies in a corner of the room.  Someone has scrawled"
    "\"Who too my dwarf skull\" in runes on the north wall.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room25",
	"west" : SHIVA_ROOM + "room22",
	"southeast" : SHIVA_ROOM + "room43",
    ]));
    }
    void reset() {
    if(!present("mediumMonstrousSpider"))
	new(SHIVA_MONSTERS + "mediumMonstrousSpider")->move(this_object());

}

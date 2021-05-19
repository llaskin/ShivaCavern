// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  There is an altar in a "
    "corner of the room.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"altar" : "This altar causes you to feel uneasy"
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room34",
	"northwest" : SHIVAROOM + "room30",
    "west" : SHIVAROOM + "room42",
	"south" : SHIVAROOM + "room54",
    ]));
    }
    void reset() {
    if(!present("krenshar"))
	    new(SHIVA_MONSTERS + "krenshar")->move(this_object());
    if(!present("bentCoins"))
    	new(SHIVA_MISC + "bentCoins")->move(this_object());

}

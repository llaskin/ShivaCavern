// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  You have to duck very low as the ceiling is extremely low in this room.");
    set_items(([
        ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room102",
	"east" : SHIVA_ROOM + "room103",
    ]));
}
void reset() {
    if(!present("bentCoins"))
	new(SHIVA_MISC + "bentCoins")->move(this_object());

}//TODO

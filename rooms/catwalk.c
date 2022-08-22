// by Lord
// room, file=room4.c

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The catwalk hangs low below the ceiling's rocky outcroppings.  It's rickety and falling apart but can support your weight.");
    set_items(([
        ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
        "floor" : "The boards of the bridge are in rough shape",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"down" : SHIVA_ROOM + "room4.c",
    ]));
}
void reset() {
    if(!present("dwarf"))
	new(SHIVA_MONSTERS + "dwarf")->move(this_object());

}
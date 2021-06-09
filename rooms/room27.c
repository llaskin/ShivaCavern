// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  Someone has scrawled an "
    "incomplete drawing of a dragon on the north wall.");
    set_smell("default", "The scent of urine fills the room");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room20",
	"west" : SHIVAROOM + "room37",
    "east" : SHIVAROOM + "room28",
    "south" : SHIVAROOM + "room41",
    ]));
    }
    void reset() {
    if(!present("shrieker"))
	new(SHIVA_MONSTERS + "shrieker")->move(this_object());

}
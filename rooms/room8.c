// by Lord
// room, file=room8

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVAROOM + "room9",
	//"west2" : SHIVAROOM + "name8", //This room is hidden.
	 //TODO:deal with this
    ]));
    }
    void reset() {
    if(!present("shrieker"))
	new(SHIVA_MONSTERS + "shrieker")->move(this_object());

}
//
//Hidden (Search DC 20) Locked Simple Wooden Chest (Open Lock DC 20, break DC 15; hard 5, 10 hp)
//2000 cp; hoard total 20 gp
// by Lord
// room, file=room11.c

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  A narrow ledge runs along "
    "the south and west walls.  A pile of rotten fruit lies"
    " on the south side of the room.");
    set_smell("A rotten smell permeates the room");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"fruit" : "This is a pile of rotten fruit",
    	"ledge" : "The ledge runs along the south and west"
    	"walls"
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVAROOM + "room12",
	"southwest" : SHIVAROOM + "room24",
    ]));
    }
    void reset() {
    if(!present("shrieker"))
	new(SHIVA_MONSTERS + "shrieker")->move(this_object());

}

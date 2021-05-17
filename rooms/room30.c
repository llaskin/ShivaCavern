// by Lord
// room, file=filename    

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
    set_exits(([
	"north" : SHIVAROOM + "room25",
	"west" : SHIVAROOM + "room22",
	"south1" : SHIVAROOM + "room43",
    ]));
    }
    void reset() {
    if(!present("mediumMonstrousSpider"))
	new(SHIVA_MONSTERS + "mediumMonstrousSpider")->move(this_object());

}//A narrow pit covered by iron bars lies in the south-east corner of the room, and someone has scrawled "Who took my dwarf skull" in goblin runes on the north wall

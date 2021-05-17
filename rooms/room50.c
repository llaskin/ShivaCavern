// by Lord
// room, file=filename    

anclude <std.h>
anclude <shivaCaverns.h>

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
	"north" : SHIVAROOM + "room36",
	"west1" : SHIVAROOM + "room48",
	"west2" : SHIVAROOM + "room55",
	"east1" : SHIVAROOM + "room49",
	"east2" : SHIVAROOM + "room57",
    ]));
}
//A group of draconic faces have been carved into the west wall, and someone has scrawled "Beware the basilisk" on the north wall

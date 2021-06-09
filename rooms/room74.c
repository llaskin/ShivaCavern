// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings. The floor is covered in perfect "
     "hexagonal tiles.  There is graffiti on the wall");
    set_items(([
	"floor" : "The floor is covered in perfect hexagonal tiles",
	({"graffiti", "wall"}) : "Someone has scrawled \"The Ravens of Frefeld killed a blue dragon here\" on the west wall",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room67",
	"west" : SHIVAROOM + "room77",
	"east" : SHIVAROOM + "room78",
	"south" : SHIVAROOM + "room82",
    ]));
    }
    void reset() {
    if(!present("krenshar"))
	new(SHIVA_MONSTERS + "krenshar")->move(this_object());

}
// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
   set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  A face is carved into the stone");
    set_items(([
    	"face" : "A demonic face is carved into the stone",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room77",
	"east" : SHIVAROOM + "room82",
    ]));
    }
    void reset() {
    if(!present("mediumMonstrousSpider"))
	new(SHIVA_MONSTERS + "mediumMonstrousSpider")->move(this_object());

}
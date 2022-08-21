// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  Part of the east wall has "
    "collapsed.  There are markings on the wall");
    set_items(([
	({"wall", "markings"}) : "Geometric shapes cover the wall",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : SHIVA_ROOM + "room84",
	"east" : SHIVA_ROOM + "room76",
	"south" : SHIVA_ROOM + "room90",
    ]));
    }
    void reset() {
    if(!present("smallMonstrousSpider"))
	new(SHIVA_MONSTERS + "smallMonstrousSpider")->move(this_object());
	new(SHIVA_MONSTERS + "smallMonstrousSpider")->move(this_object());
}
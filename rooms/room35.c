// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("short description");
    set_long("night long description");
    set_items(([
	"item1" : "desc1",
	"item2" : "desc2",
	"item3" : "desc3",
	({"item4", "item5", "item6"}):
		"desc4",
	({"item7", "item8"}) : "desc5",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVAROOM + "room18",
    ]));
    }
    void reset() {
    if(!present("mediumMonstrousSpider"))
	new(SHIVA_MONSTERS + "mediumMonstrousSpider")->move(this_object());

}
//Someone has scrawled an arrow pointing left on the south wall, and an acrid odor fills the room

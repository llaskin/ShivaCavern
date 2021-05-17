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
	"west" : SHIVAROOM + "room31",
	"south" : SHIVAROOM + "room44",
    ]));
    }
    void reset() {
    if(!present("krenshar"))
	new(SHIVA_MONSTERS + "krenshar")->move(this_object());

}
//A well lies in the south-west corner of the room, and someone has scrawled "Don't lose your head" in blood on the south wall

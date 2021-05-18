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
	"north" : SHIVAROOM + "room48",
	"west" : SHIVAROOM + "room53",
	"northeast" : SHIVAROOM + "room50"
	"southwest" : SHIVAROOM + "room63"
	"southeast" : SHIVAROOM + "room64"
    ]));
    }
    void reset() {
    if(!present("largeMonstrousCentipede"))
	new(SHIVA_MONSTERS + "largeMonstrousCentipede")->move(this_object());

}
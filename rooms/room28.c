// by Lord
// room, file=filename    

anclude <std.h>
anclude <shivaCaverns.h>

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
	"north1" : SHIVAROOM + "room20",
	"north2" : SHIVAROOM + "room21",
	"west1" : SHIVAROOM + "room27",
	"west2" : SHIVAROOM + "room41",
	"east" : SHIVAROOM + "room29",
    ]));
    }
    void reset() {
    if(!present("mediumMonstrousSpider"))
	new(SHIVA_MONSTERS + "mediumMonstrousSpider")->move(this_object());

}//Someone has scrawled "Praise Asar the Sorceror" on the south wall, and sporadic knocking can be faintly heard near the south wall

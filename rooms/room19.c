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
	"north" : SHIVAROOM + "room12",
	"north2" : SHIVAROOM + "room15",
    "west" : SHIVAROOM + "room18",
    "east" : SHIVAROOM + "room20",
    "south" : SHIVAROOM + "room36",
    "south2" : SHIVAROOM + "room37",
    ]));
    }
    void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());

}
//A magical mirror on the west wall answers questions with lies and falsehoods, and a cube of solid stone stands in the south-east corner of the room

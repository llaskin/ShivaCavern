// by Lord
// room, file=filename    

 <std.h>
inherit ROOM;

void create() {
::create();
    set_short("short description");
    set_day_long("day long description");
    set_night_long("night long description");
    set_items(([
	"item1" : "desc1",
	"item2" : "desc2",
	"item3" : "desc3",
	({"item4", "item5", "item6"}):
		"desc4",
	({"item7", "item8"}) : "desc5",
    ]));
    set_properties(([
	"light" : 1,
	"night light" : 0,
    ]));
    set_exits(([
	"west" : "shivacavern/rooms/room2.c",
	"east" : "shivacavern/rooms/room4.c",
    ]));
    void reset() {
        if(!present("mediumMonstrousSpider"))
    	new("shivacavern/monsters/mediumMonstrousSpider")->move(this_object());
    }
}
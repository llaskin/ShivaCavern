// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings. A narrow ledge runs along the walls. ");
    set_smell("default", "The smell of sulfur fills the room")
    set_items(([
    ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
	"ledge" : "This ledge runs along the walls.  There are many items resting on the ledge.",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"northeast" : SHIVA_ROOM + "room53",
    ]));
}
void reset() {
    set_search("ledge", (: this_object(), "ledge_searching" :));
}

void ledge_searching() {
    message("my_action", "After searching along the top of the ledge you find a wine goblet!", this_player());
    message("other_action", this_player()->query_cap_name()+" finds "
      "a goblet of wine.", this_object(), ({ this_player() }));
    new(SHIVA_MISC + "wine")->move(this_object());
    remove_search("ledge");
}

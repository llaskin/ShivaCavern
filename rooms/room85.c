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
    ({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    "collapse":"Rubble lays strewn around the floor"
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
    set_search("rubble", (: this_object(), "rubble_searching" :));
    if(!present("smallMonstrousSpider"))
	new(SHIVA_MONSTERS + "smallMonstrousSpider")->move(this_object());
	new(SHIVA_MONSTERS + "smallMonstrousSpider")->move(this_object());
}

void rubble_searching() {
    message("my_action", "After searching the rubble you find the head of one of the statues!", this_player());
    message("other_action", this_player()->query_cap_name()+" finds "
      "the head of a statue.", this_object(), ({ this_player() }));
    new(SHIVA_MISC + "statue_head")->move(this_object());
    remove_search("rubble");
}
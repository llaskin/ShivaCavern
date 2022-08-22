// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  A spring of water bubbles from the south wall.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"spring":"This water doesn't smell right."
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room10",
	"northeast" : SHIVA_ROOM + "room11",
    ]));
}
void init() {
::init();
 add_action("drink", "drink");
}

int drink(string str) {
  if(!str) return 0;
  if(str!="water" && str!="spring") return 0;
  message("info", "You bend down and drink some of the water trickling from "
  "the wall.", this_player());
  message("info", this_player()->query_cap_name()+" drinks some water from
the spring.", this_object(), this_player());
  if(this_player()->add_quenched(50)) this_player()->add_poisoning(10);
  return 1;
}
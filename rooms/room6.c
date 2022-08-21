// by Lord
// room, file=room6

#include <std.h>
#include  <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalactites and stalagmites "
    "in the floor and ceilings.  A small spring runs out of the"
     " wall, allowing a small trickle of water.");
    set_items(([
    	({"stalactites", "stalagmites"}) : "Rocky outcroppings appear from the floor and ceiling",
    	"water": "This water looks safe enough to drink.",
    	"spring": "Water bubbles out of the wall, a tiny trickle at a time.",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVA_ROOM + "room9.c",
	"south" : SHIVA_ROOM + "room17.c",
    ]));
    }
    void reset() {
    if(!present("etherealMarauder"))
	new(SHIVA_MONSTERS + "etherealMarauder")->move(this_object());

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
  if(this_player()->add_quenched(50)) this_player()->heal(20);
  return 1;
}
// by Lord
// room, file=room6

#include <std.h>
#include  <shivaCaverns.h>

inherit ROOM;
void init(){
    ::init();
    add_action("drink", "drink");
}
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

int check_level(object tp) {
    return 100 - tp->query_level()*10;
}

int heal() {
    object tp = this_player();
    int heal = check_level(tp);
    string *limbs;
    int i;

    if (tp->query_disable()) return notify_fail("You are too busy to drink
from the spring right now.\n");
    if (!heal) return notify_fail("You drink from the spring, but don't
feel any different.\n");
    tp->heal(heal);
    limbs = tp->query_limbs();
    i = sizeof(limbs);
    while (i--) {
        tp->heal_limb(limbs[i], heal*2);
    }
    tp->set_disable(1);
    message("info", "You drink from the spring and feel better.", tp);
    return 1;
}
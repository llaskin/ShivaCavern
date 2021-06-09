// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  There is a mirror on the wall."
    "There is some writing below the mirror.");
    set_items(([
	"writing" : "Someone has carved \"Remember you can fart while you pee.  "
	"Sometimes lightning comes before thunder\" below the mirror",
	"mirror" : "The mirror compliments you on your stylish dress",
    ]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room52",
	"northwest" : SHIVA_ROOM + "room60",
	"southwest" : SHIVA_ROOM + "room70",
    ]));
    }
    void reset() {
    if(!present("shrieker"))
	new(SHIVA_MONSTERS + "shrieker")->move(this_object());

}
//

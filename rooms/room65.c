// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  A sloped pit seems to be in the corner"
    "There is some graffiti on the wall.");
    set_items(([
	"graffiti" : "Someone has carved \"Remember you can fart while you pee.  "
	"Sometimes lightning comes before thunder\" below the mirror",
	"pit" : "The pit is lined with iron spikes.  They look pointy",
    ]));

    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"north" : SHIVA_ROOM + "room57",
	"west" : SHIVA_ROOM + "room64",
    ]));
    }
    void reset() {
    if(!present("shrieker"))
	new(SHIVA_MONSTERS + "shrieker")->move(this_object());

}

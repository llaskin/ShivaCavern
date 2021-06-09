// by Lord
// room, file=filename    

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_ROOM;

void create() {
::create();
    set_short("This balcony looks down over a geometric pattern");
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"stairs" : SHIVAROOM + "room43",
	    ]));
    }
    void reset() {
    if(!present("darkmantle"))
	new(SHIVA_MONSTERS + "darkmantle")->move(this_object());

}
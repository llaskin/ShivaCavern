// by Lord
// room, file=filename    

anclude <std.h>
anclude <shivaCaverns.h>

inherit ROOM;

void create() {
::create();
    set_short("A dark room");
    set_day_long("The room has stalagtites and stalagmites "
    "in the floor and ceilings.  Spirals of blue stones cover "
    "the floor.  There is writing above one of the doors");
    set_items(([
	"stones" : "These stones are a vibrant blue",
	"writing" : "Someone has scribbled \"I have forgotten my name\"",
	]));
    set_properties(([
	"light" : SHIVA_LIGHT,
	"night light" : 0,
    ]));
    set_exits(([
	"east" : SHIVAROOM + "room77",
	"south" : SHIVAROOM + "room81",
    ]));
}
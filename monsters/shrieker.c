// Lord
// shrieker
//https://forgottenrealms.fandom.com/wiki/Shrieker

 <std.h>
 <shivaCaverns.h>

inherit SHIVA_MONSTERS;

void create() {
::create();
    set_name("shrieker");
    set_short("shrieker");
    set_long("The shrieker is a variant of the violet "
    "fungus known for the strange and loud noises it "
    "emits to attract prey.");
    set_id(({"shrieker"}));
    set_level(SHIVA_BASELEVEL);
    set_race("mushroom");
    set_body_type("human");  //TODO: create race
    set_gender("male");
}
//TODO: Give shriek ability?  Perhaps a short para?
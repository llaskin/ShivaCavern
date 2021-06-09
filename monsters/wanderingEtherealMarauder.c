// Lord
// Wandering Etheral Marauder
//https://forgottenrealms.fandom.com/wiki/Ethereal_marauder

#include <std.h>
#include <shivaCaverns.h>

inherit MONSTER;

void create() {
::create();
    set_name("Ethereal Marauder");
    set_short("Ethereal Marauder");
    set_long("The ethereal marauder resembles a blue or "
    "purple lizard. It has a long flexible tail.  No neck "
    "is present but three large mandibles are lined with "
    "black teeth.  It has 3 eyes that it stares at you"
    "with");

    set_id(({"marauder", "ethereal marauder"}));
    set_level(SHIVA_CHALLENGE_LEVEL3);
    set_race("marauder");
    set_body_type("elemental");  //TODO: Set body type to
                                //something new?
    set_gender("male");
    set_moving(1);
    set_speed(20);
}
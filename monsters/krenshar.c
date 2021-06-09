// Lord
// Krenshar
//https://forgottenrealms.fandom.com/wiki/Krenshar

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_MONSTERS;

void create() {
::create();
    set_name("Krenshar");
    set_short("Krenshar");
    set_long("The krenshar is carnivorous magical beast "
    "similar to a big cat that can retract the skin from "
    "its face to scare prey.");
    set_id(({"krenshar"}));
    set_level(SHIVA_CHALLENGE_LEVEL4);
    set_race("feline");
    set_body_type("quadruped");
    set_gender("male");
}
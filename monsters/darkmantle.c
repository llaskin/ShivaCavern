// Lord
// Darkmantle
//https://www.dndbeyond.com/monsters/darkmantle

#include <std.h>
#include <shivaCaverns.h>

inherit MONSTER;

void create() {
::create();
    set_name("darkmantle");
    set_short("darkmantle");
    set_long("Darkmantles can cling to cavern ceilings, "
    "remaining perfectly still as it awaits prey beneath.  "
    "From a distance you might mistake it for a stalactite."
    "Darkmantles thrive in the dark.");
    set_id(({"darkmantle"}));
    set_level(SHIVA_BASELEVEL);
    set_race("darkmantle");
    set_body_type("human");//TODO create darkmantle body
    set_gender("male");
}
//TODO: Give them a crush skill based on the description
//online
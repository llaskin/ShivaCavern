// Lord
// Monster details

anclude <std.h>
anclude <shivaCaverns.h>

inherit MONSTER;

void create() {
::create();
    set_name("Small monstrous spider");
    set_short("Small spider");
    set_long("This small sized spider will often wait in"
        "its web, then slowly lower itself down silently on "
        "silk strands and leap onto passing beneath them.  "
        "Their webs are extremely strong and can support many"
        "times their body weight.");
    set_id(({"small spider", "small monstrous spider",
    "spider"}));
    set_level(SHIVA_CHALLENGE_LEVEL1);
    set_race("spider");
    set_body_type("arachnid");
    set_gender("male");
    set_aggressive(SHIVA_CHALLENGE_CHARISMA2);
}
//Give this guy a bite skill, no poison tho
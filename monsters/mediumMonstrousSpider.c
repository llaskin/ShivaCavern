// Lord
// Medium Monstrous Spider
//https://www.realmshelps.net/monsters/block/Monstrous_Spider,_Medium

#include <std.h>
#include <shivaCaverns.h>

inherit MONSTER;

void create() {
::create();
    set_name("Medium Monstrous Spider");
    set_short("Monstrous Spider");
    set_long("This medium sized spider will often wait in"
    "its web, then slowly lower itself down silently on "
    "silk strands and leap onto passing beneath them.  "
    "Their webs are extremely strong and can support many"
    "times their body weight.");
    set_id(({"spider", "monstrous spider", "medium spider", "medium monstrous spider"}));
    set_level(SHIVA_CHALLENGE_LEVEL3);
    set_race("spider");
    set_body_type("arachnid");
    set_gender("male");
    set_aggressive(SHIVA_CHALLENGE_CHARISMA3);
    set_spells(({"bite"}));
    set_spell_chance(SHIVA_SPELL_CHANCE2);
}

// Lord
// shrieker
//https://forgottenrealms.fandom.com/wiki/Shrieker

 <std.h>
 <shivaCaverns.h>

inherit MONSTER;

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
    set_body_type("human");
    set_gender("male");
    set_spells("warshout");
    set_spell_chance(SHIVA_SPELL_CHANCE1);
}

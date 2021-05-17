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
    set_level(SHIVA_CHALLENGE_LEVEL2);
    set_race("spider");
    set_body_type("arachnid");
    set_gender("male");
}
////Medium monstrous spider: CR 1; Medium vermin; HD 2d8+2; hp
// 11; Init +3; Spd 30 ft. (6 squares), climb 20 ft.; AC 14
// (+3 dex, +1 natural), touch 13, flat-footed 11; Base Atk +1;
// Grp +1; Atk +4 melee (1d6 plus poison, bite); Full Atk +4 melee
//  (1d6 plus poison, bite); Space/Reach 5 ft./5 ft.; SA Poison,
//  web; SQ Darkvision 60 ft., tremorsense 60 ft., vermin traits;
//  AL N; SV Fort +4, Ref +3, Will +0; Str 11, Dex 17, Con 12,
//  Int -, Wis 10, Cha 2
////
////Skills and Feats: Climb +11, Hide +7*, Jump +0*, Spot +4*; Weapon Finesse
////
////Treasure: 16 gp; Masterwork Longsword (Medium) (315 gp); hoard total 331 gp
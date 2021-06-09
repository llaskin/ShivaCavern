// Lord
// Huge monstrous centipede
//https://www.dandwiki.com/wiki/SRD:Huge_Monstrous_Centipede

#include <std.h>
#include <shivaCaverns.h>

inherit SHIVA_MONSTERS;

void create() {
::create();
    set_name("Huge Monstrous Centipede");
    set_short("Huge Monstrous Centipede");
    set_long("Monstrous centipedes tend to attack anything "
    "that resembles food, biting with their jaws and "
    "injecting their poison.");
    set_id(({"centipede", "monstrous centipede", "huge monstrous centipede"}));
    set_level(SHIVA_CHALLENGE_LEVEL4);
    set_race("centipede");
    set_body_type("arachnid"); //TODO: Shoudl this be some sort of bug body type?
    set_gender("male");
    set_spells(({"rancid_bite"}));
    set_spell_chance(SHIVA_SPELL_CHANCE3);
}
//TODO: give them a poisonous bite
//Huge monstrous centipede: CR 2; Huge vermin; HD 6d8+6; hp 33; Init +2; Spd 40 ft. (8 squares), climb 40 ft.;
//AC 16 (-2 size, +2 dex, +6 natural), touch 10, flat-footed 14; Base Atk +4; Grp +15; Atk +5 melee
//(2d6+4 plus poison, bite); Full Atk +5 melee (2d6+4 plus poison, bite); Space/Reach 15 ft./10 ft.; SA Poison;
//SQ Darkvision 60 ft., vermin traits; AL N; SV Fort +6, Ref +4, Will +2; Str 17, Dex 15, Con 12, Int -, Wis 10, Cha 2
//  Skills and Feats: Climb +11, Hide +2, Spot +4; -
// Lord
// Huge monstrous centipede
//https://www.dandwiki.com/wiki/SRD:Huge_Monstrous_Centipede

#include <std.h>
#include <shivaCaverns.h>

inherit MONSTER;

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
    add_limb( "head" , "FATAL" , query_hp() , 0 , 10 );
    add_limb( "torso" , "FATAL" , query_hp() , 0 , 10 );
    add_limb( "first leg" , 0 , 50 , 0 , 10 );
    add_limb( "second leg" , 0 , 50 , 0 , 10 );
    add_limb( "third leg" , 0 , 50 , 0 , 10 );
    add_limb( "fourth leg" , 0 , 50 , 0 , 10 );
    add_limb( "fifth leg" , 0 , 50 , 0 , 10 );
    add_limb( "sixth leg" , 0 , 50 , 0 , 10 );
    add_limb( "seventh leg" , 0 , 50 , 0 , 10 );
    add_limb( "eigth leg" , 0 , 50 , 0 , 10 );
    add_limb( "ninth leg" , 0 , 50 , 0 , 10 );
    add_limb( "tenth leg" , 0 , 50 , 0 , 10 );
    set_gender("male");
    set_spells(({"rancid_bite"}));
    set_spell_chance(SHIVA_SPELL_CHANCE3);
}

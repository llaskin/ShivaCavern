// Lord
// Tiny Monstrous Centipede
//https://www.dandwiki.com/wiki/SRD:Small_Monstrous_Centipede

 #include <std.h>
 #include <shivaCaverns.h>

inherit MONSTER;

void create() {
::create();
    set_name("Small monstrous centipede");
    set_short("Monstrous centipede");
    set_long("Monstrous centipedes tend to attack anything "
    "that resembles food, biting with their jaws and injecting their poison.");
    set_id(({"centipede", "monstrous centipede",
     "small monstrous centipere"}));
    set_level(SHIVA_CHALLENGE_LEVEL2);
    set_race("centipede");
    set_body_type("insectoid");
    set_gender("male");
    set_aggressive(SHIVA_CHALLENGE_CHARISMA2);
    //TODO: Make him have a poisonous bite
}
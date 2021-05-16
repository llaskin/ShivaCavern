// Lord
// Medium Monstrous Spider

 <std.h>
inherit MONSTER;

void create() {
::create();
    set_name("Medium Monstrous Spider");
    set_short("monstershort");
    set_long("monsterlong"); //TODO: Create Description
    set_id(({"spider", "monstrous spider", "medium spider", "medium monstrous spider"}));
    set_level(100);
    set_race("spider");
    set_body_type("spider");
    set_gender("male");
}
// Lord
// Broundomi Gravelsword

#include <std.h>
#include <shivaCaverns.h>

inherit MONSTER;

void create() {
::create();
    set_name("Broundomi");
    set_short("Broundomi, the dwarf");
    set_long("Broundomi seems to have been in this cave for"
    " a long time.  His beard is grey from years of no"
    " sunlight.  His eyes search the walls of the room."
    " He looks like he is looking for someone.");
    set_id(({"broundomi"}));
    set_level(SHIVA_BUFFLEVEL);
    set_race("dwarf");
    set_body_type("human");
    set_gender("male");
}
void catch_tell(string msg) {
    string a, b;
    msg=strip_colours(msg);
    msg=lower_case(msg);
    if(sscanf(msg, "they ate borgga"))
    {
        this_player()->set_property("borgga", 1);
    }
    if(sscanf(msg, "masym died here"))
    {
        this_player()->set_property("masym", 1);
        deeds();
    }
    if(sscanf(msg, "masym died here"))
    {
        this_player()->set_property("masym", 1);
        deeds();
    }
    if(sscanf(msg, "the lions of naramunz killed a white dragon"))
    {
        this_player()->set_property("naramunz", 1);
        deeds();
    }
    if(sscanf(msg, "The ravens of frefeld killed a blue dragon"))
    {
        this_player()->set_property("frefeld", 1);
        deeds()
    }

}
void deeds(){
if((this_player()->query_property("borgga") && (this_player()->query_property("masym")))
    {
        tp->set_mini_quest("Broundomi's tears", 1000000, "You helped a sad dwarf learn"
        " about his friends demise");
        this_player()->remove_property("masym");
        this_player()->remove_property("borgga");
    }
    if((this_player()->query_property("Frefeld") && (this_player()->query_property("Naramunz")))
    {
        tp->set_mini_quest("Dragon Hunters", 1000000, "The dragons of Shiva have been slain");
        this_player()->remove_property("Naramunz");
        this_player()->remove_property("Frefeld");
    }
}

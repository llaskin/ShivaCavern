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
void deeds(object tp){
if(tp->query_property("borgga") && (tp->query_property("masym")))
    {
        tp->set_mini_quest("Broundomi's tears", 1000000, "You helped a sad dwarf learn"
        " about his friends demise");
        tp->remove_property("masym");
        tp->remove_property("borgga");
        force_me("say Thank you for telling me about my friends");
        force_me("emote cries mournfully ");
    }
    if(tp->query_property("Frefeld") && (tp->query_property("Naramunz")))
    {
        tp->set_mini_quest("Dragon Hunters", 1000000, "The dragons of Shiva have been slain");
        tp->remove_property("Naramunz");
        tp->remove_property("Frefeld");
        force_me("say My friends have been avenged.  Thank you
                    for the news.");
    }
}

void catch_tell(string msg) {
    string a, b;
    int randVal = random(3);
    object tp = this_player();
    msg=strip_colours(msg);
    msg=lower_case(msg);
        
        if(sscanf(msg, "%ssays: %s", a, b) == 2) {
                if(b == "they ate borgga") {
                        tp->set_property("borgga", 1);
                        deeds(tp);
                        }
                if(b == "masym died here") {
                        tp->set_property("masym", 1);
                        deeds(tp);
                        }
                if(b == "the lions of naramunz killed a white dragon") {
                        tp->set_property("naramunz", 1);
                        deeds(tp);

                if(b == "the ravens of frefeld killed a blue dragon") {
                        tp->set_property("frefeld", 1);
                        deeds(tp);
                }
                if((b == "deed") || (b == "deeds")) || (b == "friends"))
                {
                    if(randVal == 0){
                        force_me("say What news of Borgga?  Where is he?");
                    }
                    else if(randVal == 1){
                        force_me("say Masym is on his way, I know it.");
                    }
                    else if(randVal == 2){
                        force_me("say They were fighting a dragon");
                    }
                    else if(randVal == 3){
                        force_me("say My friends have been avenged.  Thank you
                        for the news.");
                    }

                }
        }
}      
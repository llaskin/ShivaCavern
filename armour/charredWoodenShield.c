//Lord
//Charred Wooden Shield
#include <std.h>
inherit ARMOUR;

void create() {
::create();
    set_name("shield");
    set_short("a charred wooden shield");
    set_long("The shield has burn marks.  It doesn't look like its worth using.");
    set_id(({"shield", "charred shield", "wooden shield", "charred wooden shield"}));
    set_ac(2);            // Armour class of armour
    set_mass(5);
    set_value(15);
    set_type("shield");
    set_limbs(({"torso", "left arm"}));
    set_material(({"wood"}));
}
//TODO: How to make this a shield, and make sure it doesn't
//block other wearings
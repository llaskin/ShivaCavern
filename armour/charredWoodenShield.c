//Lord
//Charred Wooden Shield
#include <std.h>
inherit ARMOUR;

void create() {
::create();
    set_name("shield");
    set_short("a charred wooden shield");
    set_long("The vest is made from a rather ridged leather, making "
	"it appear as rather good protection.");
    set_id(({"vest", "shield", "charred shield", "wooden shield", "charred wooden shield"}));
    set_ac(3);            // Armour class of armour
    set_mass(5);
    set_value(150);
    set_type("armour");   // Read help files for legal types
    set_limbs(({"torso", "left arm"}));
    set_material(({"leather"}));
    set_size(9000);
}
//TODO: How to make this a shield, and make sure it doesn't
//block other wearings
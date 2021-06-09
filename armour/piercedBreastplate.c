//Lord
//Pierced Breastplate
#include <std.h>
inherit SHIVA_ARMOUR;

void create() {
::create();
    set_name("Pierced Breastplate");
    set_short("pierced breastplate");
    set_long("This breastplate has a hole in the chest.  It looks"
	"relatively worthless.");
    set_id(({"breastplate", "pierced breastplate"}));
    set_ac(3);            // Armour class of armour
    set_mass(25);
    set_value(150);
    set_type("armour");   // Read help files for legal types
    set_limbs(({"torso"}));
    set_material(({"metal"}));
    set_size(9000);
}
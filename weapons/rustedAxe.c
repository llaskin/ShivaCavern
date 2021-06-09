#include <std.h>
inherit WEAPON;

void create() {
::create();
    set_name("Rusted axe");
    set_short("Rusted axe");
    set_long("This rusted axe doesn't look too useful");
    set_id(({"axe", "rusted axe"}));
    set_mass(9);
    set_value(100);
    set_type("axe");
    set_wc(15);          // Weapon Class 6, a newbie weapon
    set_ac(0);          // Armour Class 1, protects hands a little
    set_material(({"metal","wood"}));
}
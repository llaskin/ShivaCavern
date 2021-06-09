#include <std.h>
inherit SHIVA_MISC;

void create() {
::create();
    set_name("pile of bent coins");
    set_short("bent coins");
    set_long("This is a pile of bent coins.  They are useless for trade");
    set_id(({"coins", "bent coins", "pile", "pile of bent coins"}));
    set_mass(3);
    set_value(5);
    set_material(({"metal"}));
}
#include <std.h>
inherit DRINK;

void create() {
    ::create();
    set_name("wine goblet");
    set_empty_name("goblet");
    set_long("A goblet full of a very expensive wine.");
    set_short(
      "A full wine goblet"
    );
    set_id(({
      "wine", "goblet", "wine goblet"
}));
    set_mass(1);
    set_value(500);
    set_strength(100);
set_material(({"glass", "liquid"}));
    set_drink("$N sip $O and it goes downs mooth.", "$N sips $O and gets a
little flushed.");
}
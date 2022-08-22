#include <std.h>
inherit OBJECT;

void create() {
::create();
    set_name("Tuft of fur");
    set_short("Fur tuft");
    set_long("This small tuft of fur is so light and fluffy.");
    set_id(({"tuft", "fur", "fur tuft"}));
    set_mass(1);
    set_value(5);
    set_material(({"organic"}));
}
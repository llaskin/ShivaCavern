#include <std.h>
inherit OBJECT;

void create() {
::create();
    set_name("statue head");
    set_short("head");
    set_long("The head of a statue.  It is unrecognizable which statue it belongs to.");
    set_id(({"head", "statue head"}));
    set_mass(10);
    set_value(100);
    set_material(({"marble"}));
}
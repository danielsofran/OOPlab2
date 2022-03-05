#include <stdio.h>
#include "tests.h"
#include "ui.h"

int main() {
    testall();
    Medicament medicament1 = medicament_create("123", "Fasconal", 30.0, 2),
    medicament2 = medicament_create("123c454g4", "Fasconal alb de casa", 70.234423, 2888);
//    Service s;
//    menu(&s);
    Medicament m = medicament_scan();
    medicament_print(m);
    return 0;
}

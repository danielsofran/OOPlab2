#include "tests.h"
#include "ui.h"

int main() {
    testall();
    //Medicament medicament1 = medicament_create("123", "Fasconal", 30.0, 2);
    //Medicament medicament2 = medicament_create("123c454g4", "Fasconal alb de casa", 70.234423, 2888);
    Repository repository = repository_create();
    Service s = service_create(repository);
    //menu(&s);
    return 0;
}

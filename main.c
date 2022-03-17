#include "tests.h"
#include "ui.h"

int main() {
    testall();
    Repository* repository = repository_create(medicament_eq);
    Service* s = service_create(repository);
    menu(s);
    service_delete(s);
    return 0;
}

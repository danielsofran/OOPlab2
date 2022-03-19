#include "tests.h"
#include "ui.h"

/**
 * set(CMAKE_CXXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
 * pentru memory leaks
 */

int main() {
    testall();
    Repository* repository = repository_create(medicament_eq);
    Service* s = service_create(repository);
    menu(s);
    service_delete(s);
    return 0;
}

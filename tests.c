//
// Created by Daniel on 05.03.2022.
//

#include "tests.h"

void test_medicament_getters(){
    Medicament* medicament = medicament_create_default();

    assert(medicament_get_cod(medicament) == NULL);
    assert(medicament_get_nume(medicament) == NULL);
    assert(medicament_get_concentratie(medicament) == 0.0);
    assert(medicament_get_cantitate(medicament) == 0);

    medicament = medicament_create("1234", "Fasconal", 30.0, 10);
    assert(strcmp(medicament_get_cod(medicament), "1234")==0);
    assert(strcmp(medicament_get_nume(medicament), "Fasconal")==0);
    assert(medicament_get_concentratie(medicament) == 30.0);
    assert(medicament_get_cantitate(medicament) == 10);

    medicament_delete(medicament);
}

void test_medicament_setters(){
    Medicament* medicament = medicament_create_default();
    medicament_set_cod(medicament, "1234");
    medicament_set_nume(medicament, "Fasconal");
    medicament_set_concentratie(medicament, 30.0);
    medicament_set_cantitate(medicament, 10);

    assert(strcmp(medicament_get_cod(medicament), "1234")==0);
    assert(strcmp(medicament_get_nume(medicament), "Fasconal")==0);
    assert(medicament_get_concentratie(medicament) == 30.0);
    assert(medicament_get_cantitate(medicament) == 10);

    medicament_delete(medicament);
}

void test_medicament_externs(){
    Medicament *medicament1 = medicament_create_default(),
    *medicament2 = medicament_create("1234", "Fasconal", 30.0, 10);

    medicament_set_cod(medicament1, "1234");
    medicament_set_nume(medicament1, "Fasconal");
    medicament_set_concentratie(medicament1, 30.0);
    medicament_set_cantitate(medicament1, 10);
    assert(medicament_eq(medicament1, medicament2));
    assert(!medicament_eq(medicament1, medicament_create_default()));

    medicament_sterge_stoc(medicament1);
    assert(medicament_get_cantitate(medicament1) == 0);

    medicament_delete(medicament1);
    medicament_delete(medicament2);
}

void test_validator(){
    assert(validate_nume("abC def") == VALIDATOR_OK);
    assert(validate_nume("asfswd%") == EROARE_NUME);
    assert(validate_nume("") == EROARE_NUME);
    assert(validate_cod("Abc123") == VALIDATOR_OK);
    assert(validate_cod("ned$wbu") == EROARE_COD);
    assert(validate_cod("") == EROARE_COD);
    assert(validate_cantitate(3) == VALIDATOR_OK);
    assert(validate_cantitate(-2) == EROARE_CANT);
    assert(validate_concentratie(82.123) == VALIDATOR_OK);
    assert(validate_concentratie(-39.1) == EROARE_CONC);
    assert(validate_concentratie(120.0) == EROARE_CONC);

    Medicament* medicament = medicament_create("", "acb", 0, 0);
    assert(validate_madicament(medicament) == 0b1101);
    medicament_delete(medicament);
}

void test_repo_getters(){
    Repository* repository = repository_create(medicament_eq);
    assert(repository_get_length(repository) == 0);
    assert(repository_get_capacity(repository) == LENGTHMAX);

    Medicament* medicament = repository_get_element_at(repository, 1);
    assert(IS_ERROR(OUT_OF_RANGE));
    CLEAR_ERRORS;

    medicament = medicament_create_default();
    repository->length=1;
    repository->elements[0] = medicament;
    assert(medicament_eq(medicament_create_default(),
                         repository_get_element_at(repository, 0)));
    int index = repository_index_of(repository, medicament_create_default());
    assert(index == 0);
    index = repository_index_of(repository, medicament_create("1", "2", 3.7, 4));
    assert(index == NOT_FOUND);

    repository_delete(repository);
}

void test_repo_setters(){
    Repository* repository = repository_create(medicament_eq);
    Medicament *m1 = medicament_create_default(), *m2 = medicament_create("1234", "Fasconal", 30.0, 10);
    repository_add(repository, m1);
    assert(repository_get_length(repository)==1);
    assert(medicament_eq(m1, repository_get_element_at(repository, 0)));

    repository_set_length(repository, 105);
    assert(repository_get_length(repository) == 105);

    repository_set_capacity(repository, 110);
    assert(repository_get_capacity(repository) == 110);

    repository_set_length(repository, 2);
    assert(repository_get_length(repository) == 2);
    repository_set_element_at(repository, 1, m2);
    assert(medicament_eq(m2, repository_get_element_at(repository, 1)));

    repository_set_element_at(repository, 3, m1);
    assert(IS_ERROR(OUT_OF_RANGE));
    CLEAR_ERRORS;

    repository_set_length(repository, 100);
    repository_add(repository, m2);

    repository_delete(repository);
}

void test_service()
{
    Repository* repository = repository_create(medicament_eq);
    Service* service = service_create(repository);
    Medicament *m1 = medicament_create_default(),
    *m2 = medicament_create("1234", "Fasconal", 30.0, 10);
    assert(service_length(service) == 0);
    // ADAUGARE
    // eroare
    int result = service_add(service, NULL, NULL, 0.0, 0);
    assert(result != SUCCESS);
    // un elem
    result = service_add(service, "1234", "Fasconal", 30.0, 10);
    assert(result == SUCCESS);
    assert(service_length(service) == 1);
    assert(medicament_eq(service_element(service, 0), m2));
    // 2 elemente de acelasi tip
    medicament_set_cantitate(m2, 5);
    result = service_add(service, "1234", "Fasconal", 30.0, 5);
    assert(result == SUCCESS);
    assert(service_length(service) == 1);
    // alt elem diferit
    result = service_add(service, "abc", "Fasconal", 30.0, 10);
    assert(result == SUCCESS);
    assert(service_length(service) == 2);

    // MODIFICARE
    result = service_modify(service, "abc", "Fasconal", 30.0, "Parasinus", 25.0);
    assert(result == SUCCESS);
    result = service_modify(service, "dac", "Fasconal", 30.0, "Parasinus", 25.0);
    assert(result == NOT_FOUND);
    result = service_modify(service, "abc", "Fasconal", 30.0, "^%^&%*", 120.0);
    assert(result == EROARE_NUME + EROARE_CONC);
    result = service_modify(service, "abc", "Fasconal", 30.0, "med", 120.0);
    assert(result == EROARE_CONC);

    // stergere cantitate
    result = service_delete_cant(service, "abc");
    assert(result == SUCCESS);
    result = service_delete_cant(service, "dac");
    assert(result == NOT_FOUND);

    service_delete(service);
}

void testall() {
    test_medicament_getters();
    test_medicament_setters();
    test_validator();
    test_repo_getters();
    test_medicament_externs();
    test_repo_setters();
    test_service();
}
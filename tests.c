//
// Created by Daniel on 05.03.2022.
//

#include "tests.h"

void test_medicament_getters(){ // testez toti getterii
    Medicament medicament = medicament_create_default();
    char nume[LGMAX_NUME], cod[LGMAX_COD];
    medicament_get_cod(medicament, cod);
    medicament_get_nume(medicament, nume);
    assert(strcmp(cod, "0")==0);
    assert(strcmp(nume, "medicament")==0);
    assert(medicament_get_concentratie(medicament) == 0.0);
    assert(medicament_get_cantitate(medicament) == 0);

    medicament = medicament_create("1234", "Fasconal", 30.0, 10);
    medicament_get_cod(medicament, cod);
    medicament_get_nume(medicament, nume);
    assert(strcmp(cod, "1234")==0);
    assert(strcmp(nume, "Fasconal")==0);
    assert(medicament_get_concentratie(medicament) == 30.0);
    assert(medicament_get_cantitate(medicament) == 10);
}

void test_medicament_setters(){ // testez toti setterii
    Medicament medicament;
    medicament_set_cod(&medicament, "1234");
    medicament_set_nume(&medicament, "Fasconal");
    medicament_set_concentratie(&medicament, 30.0);
    medicament_set_cantitate(&medicament, 10);

    char nume[LGMAX_NUME], cod[LGMAX_COD];
    medicament_get_cod(medicament, cod);
    medicament_get_nume(medicament, nume);
    assert(strcmp(cod, "1234")==0);
    assert(strcmp(nume, "Fasconal")==0);
    assert(medicament_get_concentratie(medicament) == 30.0);
    assert(medicament_get_cantitate(medicament) == 10);
}

void test_medicament_externs(){ // testez operatiile externe
    Medicament medicament1, medicament2 = medicament_create("1234", "Fasconal", 30.0, 10);
    medicament_set_cod(&medicament1, "1234");
    medicament_set_nume(&medicament1, "Fasconal");
    medicament_set_concentratie(&medicament1, 30.0);
    medicament_set_cantitate(&medicament1, 10);
    assert(medicament_eq(medicament1, medicament2));
    assert(!medicament_eq(medicament1, medicament_create_default()));

    medicament_sterge_stoc(&medicament1);
    assert(medicament_get_cantitate(medicament1) == 0);
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

    Medicament medicament = medicament_create("", "acb", 0, 0);
    assert(validate_madicament(medicament) == 0b1101);
}

void test_repo_getters(){ // testez getterii
    Repository repository = repository_create();
    assert(repository_get_length(repository) == 0);
    assert(repository_get_capacity(repository) == LENGTHMAX);

    Medicament medicament = repository_get_element_at(repository, 1);
    assert(IS_ERROR(OUT_OF_RANGE));
    CLEAR_ERRORS;

    medicament = medicament_create_default();
    repository.length=1;
    repository.medicamente[0] = medicament;
    assert(medicament_eq(medicament_create_default(), repository_get_element_at(repository, 0)));
    int index = repository_index_of(repository, medicament_create_default());
    assert(index == 0);
    index = repository_index_of(repository, medicament_create("1", "2", 3.7, 4));
    assert(index == NOT_FOUND);
}

void test_repo_setters(){
    Repository repository = repository_create();
    Medicament m1 = medicament_create_default(), m2 = medicament_create("1234", "Fasconal", 30.0, 10);
    repository_add(&repository, m1);
    assert(repository_get_length(repository)==1);
    assert(medicament_eq(m1, repository_get_element_at(repository, 0)));

    repository_set_length(&repository, LENGTHMAX+10);
    assert(IS_ERROR(INSUFFICIENT_CAPACITY));
    CLEAR_ERRORS;

    repository_set_length(&repository, 2);
    assert(repository_get_length(repository) == 2);
    repository_set_element_at(&repository, 1, m2);
    assert(medicament_eq(m2, repository_get_element_at(repository, 1)));

    repository_set_element_at(&repository, 3, m1);
    assert(IS_ERROR(OUT_OF_RANGE));
    CLEAR_ERRORS;

    repository_set_length(&repository, LENGTHMAX);
    repository_add(&repository, m1);
    assert(IS_ERROR(OUT_OF_RANGE));
    CLEAR_ERRORS;
}

void test_service()
{
    Repository repository = repository_create();
    Service service = service_create(repository);
    Medicament m1 = medicament_create_default(), m2 = medicament_create("1234", "Fasconal", 30.0, 10);
    assert(service_length(service) == 0);
    assert(service_iterator(&service) == NULL);
    // un elem
    int result = service_add(&service, m2);
    assert(result == SUCCESS);
    assert(service_length(service) == 1);
    assert(medicament_eq(*service_iterator(&service), m2));
    // 2 elemente de acelasi tip
    medicament_set_cantitate(&m2, 5);
    result = service_add(&service, m2);
    assert(result == SUCCESS);
    assert(service_length(service) == 1);
    // alt elem diferit
    medicament_set_cod(&m2, "abc");
    result = service_add(&service, m2);
    assert(result == SUCCESS);
    assert(service_length(service) == 2);
}

void testall() { // apelez toate testele
    test_medicament_getters();
    test_medicament_setters();
    test_validator();
    test_repo_getters();
    test_medicament_externs();
    test_repo_setters();
    test_service();
}
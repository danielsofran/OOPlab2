//
// Created by Daniel on 05.03.2022.
//

#include "service.h"

Service service_create(Repository repository){ // creeaza si returneaza un service pe baza de repository
    Service service;
    service.repository = repository;
    return service;
}

int service_length(Service service)
{ // nr de medicamente
    return repository_get_length(service.repository);
}

Medicament* service_iterator(Service* service)
{// pointer catre primul element al repo-ului din service
    if(service_length(*service) == 0)
        return NULL;
    return service->repository.medicamente;
}

int service_add(Service* service, Medicament medicament){ // adaug datele la service, returnez codul de eroare sau succes
    // 1. validez
    int cod_eroare = validate_madicament(medicament);
    if(cod_eroare != SUCCESS) return cod_eroare;
    // 2. adaug
    int index = repository_index_of(service->repository, medicament);
    if(index == NOT_FOUND) {
        repository_add(&(service->repository), medicament);
        return SUCCESS;
    }
    else{
        Medicament elem = repository_get_element_at(service->repository, index);
        int cant = medicament_get_cantitate(elem);
        medicament_set_cantitate(&elem, cant+ medicament_get_cantitate(medicament));
        repository_set_element_at(&(service->repository), index, elem);
        return SUCCESS;
    }
}

int service_modify(Service* service, char* cod, char* nume, double conc, char* nounume, double nouaconc)
{ // actualizez nume si conc unui medicament la nounume si nouaconc
    // returnez NOT_FOUND daca nu a putut fi gasit
    // returnez cod de eroare in caz ca datele de intrare nu sunt corecte
    // returnez SUCCESS daca operatia a fost efectuata
    Medicament medicament = medicament_create(cod, nume, conc, 1);
    int result = validate_madicament(medicament);
    if(result != SUCCESS) return result;
    result = validate_nume(nounume) + validate_concentratie(nouaconc);
    if(result != SUCCESS) return result;

    int index = repository_index_of(service->repository, medicament);
    if(index == NOT_FOUND) return NOT_FOUND;
    medicament = repository_get_element_at(service->repository, index);
    medicament_set_nume(&medicament, nounume);
    medicament_set_concentratie(&medicament, nouaconc);
    repository_set_element_at(&(service->repository), index, medicament);
    return SUCCESS;
}

int service_delete_cant(Service* service, char* cod)
{// sterg stocul unui medicament si returnez SUCCESS
    // returnez NOT_FOUND in cazul in care nu exista
    int index = repository_index_of_cod(service->repository, cod);
    if(index == NOT_FOUND) return NOT_FOUND;
    Medicament medicament = repository_get_element_at(service->repository, index);
    medicament_set_cantitate(&medicament, 0);
    repository_set_element_at(&(service->repository), index, medicament);
    return SUCCESS;
}
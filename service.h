//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_SERVICE_H
#define LAB2_SERVICE_H

#include "domain.h"
#include "validator.h"
#include "repository.h"

//#define MEDICAMENT_TYPES char*, char*, double, int
//#define MEDICAMENT_ARGS char* cod, char* nume, double concentratie, int cantitate

typedef struct{
    Repository repository;
} Service;

// creeaza si returneaza un service pe baza de repository
Service service_create(Repository);

// nr de medicamente
int service_length(Service);

// pointer catre primul element al repo-ului din service
Medicament* service_iterator(Service*);

// adaug datele la service, returnez codul de eroare sau succes
int service_add(Service*, Medicament);

// actualizez nume si conc unui medicament la nounume si nouaconc
// returnez NOT_FOUND daca nu a putut fi gasit
// returnez cod de eroare in caz ca datele de intrare nu sunt corecte
// returnez SUCCESS daca operatia a fost efectuata
int service_modify(Service*, char*, char*, double, char*, double);

// sterg stocul unui medicament si returnez SUCCESS
// returnez NOT_FOUND in cazul in care nu exista
int service_delete_cant(Service*, char*);

#endif //LAB2_SERVICE_H

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

Service service_create(Repository);
int service_length(Service);
Medicament* service_iterator(Service*);
int service_add(Service*, Medicament);

#endif //LAB2_SERVICE_H

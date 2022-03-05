//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_SERVICE_H
#define LAB2_SERVICE_H

#include "domain.h"
#include "validator.h"
#include "repository.h"

#define MEDICAMENT_TYPES char*, char*, double, int

typedef struct{
    Repository repository;
} Service;

Service service_create(Repository);
void service_add(Service*, MEDICAMENT_TYPES);


#endif //LAB2_SERVICE_H

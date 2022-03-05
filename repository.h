//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_REPOSITORY_H
#define LAB2_REPOSITORY_H

#include <malloc.h>
#include "errors.h"
#include "domain.h"


#define LENGTHMAX 100
//#define ALLOC(Type, Size) ((Type*)malloc(sizeof(Type)*Size))

typedef struct{
    int length;
    int capacity;
    Medicament medicamente[LENGTHMAX];
} Repository;

Repository repository_create(); // constructor

int repository_get_length(Repository); // getter nr de elemente
int repository_get_capacity(Repository); // getter capacitate
Medicament repository_get_element_at(Repository, int); // indexer get

void repository_set_length(Repository*, int); // setter lungime
//void repository_set_capacity(Repository*, int); // setter capacitate, realocare
void repository_set_element_at(Repository*, int, Medicament); // indexer set

void repository_add(Repository*, Medicament);

//void repository_realloc(Repository*); // realocarea spatiului daca apar depasiri
//void repository_delete(Repository*); // destructor

#endif //LAB2_REPOSITORY_H

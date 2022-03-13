//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_REPOSITORY_H
#define LAB2_REPOSITORY_H

#include <malloc.h>
#include "errors.h"
#include "domain.h"


#define LENGTHMAX 100

typedef struct{
    int length;
    int capacity;
    void** elements;
    int (*elem_eq)(void*, void*);
} Repository;

// creez un repository vid de capacitate LENGTHMAX
Repository* repository_create(int (*)(void*, void*)); // constructor


// returneaza numarul de elemente dintr-un repo transmis ca parametru
int repository_get_length(Repository*); // getter nr de elemente

// returneaza capaitatea unui repo
int repository_get_capacity(Repository*); // getter capacitate

// returneaza elementul de tip Medicament de la pozitia index
// seteaza eroarea OUT_OF_RANGE daca index >= length sau index < 0
// returneaza NOT_FOUND daca nu exista
void* repository_get_element_at(Repository*, int); // indexer get


/**
 * repository: pointer catre un repo
 * length: lungimea noua
 * seteaza lungimea repo ului la length, eventual folosind realocare
 */
void repository_set_length(Repository*, int); // setter lungime
void repository_set_capacity(Repository*, int); // setter capacitate, realocare
/**
 * repository: pointer catre un repo
 * index: index-ul care va fi modificat repo
 * medicament: o instanta a structurii Medicament
 * seteaza eroarea OUT_OF_RANGE in cazul in care index >= length sau index < 0
 */
void repository_set_element_at(Repository*, int, void*); // indexer set

/**
 * repository: pointer catre un repo
 * medicament: o instanta a structurii Medicament
 * adauga medicamentul la sfarsitul repo-ului
 */
void repository_add(Repository*, void*); // append

// returnez pozitia pe care se afla un medicament
// NOT_FOUND daca nu exista
int repository_index_of(Repository*, void*); // find

void repository_delete(Repository*); // destructor

#endif //LAB2_REPOSITORY_H

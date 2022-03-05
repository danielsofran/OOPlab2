//
// Created by Daniel on 05.03.2022.
//

#include "repository.h"

Repository repository_create(){ // creez un repository vid de capacitate LENGTHMAX
    Repository repository;
    repository.capacity = LENGTHMAX;
    repository.length = 0;
    //repository.medicamente = ALLOC(Medicament, LENGTHMAX);
    return repository;
}

int repository_get_length(Repository repository){
    // returneaza numarul de elemente dintr-un repo transmis ca parametru
    return repository.length;
}
int repository_get_capacity(Repository repository) {
    // returneaza capaitatea unui repo
    return repository.capacity;
}
Medicament repository_get_element_at(Repository repository, int index) {
    // returneaza elementul de tip Medicament de la pozitia index
    // seteaza eroarea OUT_OF_RANGE daca index >= length sau index < 0
    if(index>=0 && index<repository.length)
        return repository.medicamente[index];
    SET_ERROR(OUT_OF_RANGE);
    Medicament error={};
    return error;
}

void repository_set_length(Repository* repository, int length) {
    /**
     * repository: pointer catre un repo
     * length: lungimea noua
     * seteaza lungimea repo ului la length
     */
    if(length<=repository->capacity) repository->length = length;
    else SET_ERROR(INSUFFICIENT_CAPACITY);
}
void repository_set_element_at(Repository* repository, int index, Medicament medicament) {
    /**
     * repository: pointer catre un repo
     * index: index-ul care va fi modificat repo
     * medicament: o instanta a structurii Medicament
     * seteaza eroarea OUT_OF_RANGE in cazul in care index >= length sau index < 0
     */
    if(index<repository->length && index >=0)
        repository->medicamente[index] = medicament;
    else SET_ERROR(OUT_OF_RANGE);
}

void repository_add(Repository* repository, Medicament medicament){
    /**
     * repository: pointer catre un repo
     * medicament: o instanta a structurii Medicament
     * adauga medicamentul la sfarsitul repo-ului
     * seteaza eroarea CONTAINER_FULL in cazul in care in container nu mai pot fi adaugate elemente
     */
    if(repository->length >= repository->capacity) {
        SET_ERROR(OUT_OF_RANGE);
        return;
        //repository_realloc(repository);
    }
    repository->medicamente[repository->length++] = medicament;
}

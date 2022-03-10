//
// Created by Daniel on 05.03.2022.
//

#include "repository.h"

Repository repository_create(){
    Repository repository;
    repository.capacity = LENGTHMAX;
    repository.length = 0;
    //repository.medicamente = ALLOC(Medicament, LENGTHMAX);
    return repository;
}

int repository_get_length(Repository repository){
    return repository.length;
}
int repository_get_capacity(Repository repository) {
    return repository.capacity;
}
Medicament repository_get_element_at(Repository repository, int index) {
    if(index>=0 && index<repository.length)
        return repository.medicamente[index];
    SET_ERROR(OUT_OF_RANGE);
    return medicament_create_default();
}

void repository_set_length(Repository* repository, int length) {
    if(length<=repository->capacity) repository->length = length;
    else SET_ERROR(INSUFFICIENT_CAPACITY);
}
void repository_set_element_at(Repository* repository, int index, Medicament medicament) {
    if(index<repository->length && index >=0)
        repository->medicamente[index] = medicament;
    else SET_ERROR(OUT_OF_RANGE);
}

void repository_add(Repository* repository, Medicament medicament){
    if(repository->length >= repository->capacity) {
        SET_ERROR(OUT_OF_RANGE);
        return;
        //repository_realloc(repository);
    }
    repository->medicamente[repository->length++] = medicament;
}

int repository_index_of(Repository repository, Medicament medicament)
{
    int n = repository_get_length(repository);
    for(int i=0;i<n;++i)
        if(medicament_eq(medicament, repository_get_element_at(repository, i)))
            return i;
    return NOT_FOUND;
}

int repository_index_of_cod(Repository repository, char* cod)
{
    int n = repository_get_length(repository);
    char cod_m[LGMAX_COD];
    for(int i=0;i<n;++i) {
        Medicament medicament = repository_get_element_at(repository, i);
        medicament_get_cod(medicament, cod_m);
        if (strcmp(cod, cod_m)==0)
            return i;
    }
    return NOT_FOUND;
}
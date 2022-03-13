//
// Created by Daniel on 05->03->2022->
//

#include "repository.h"

Repository* repository_create(int (*eq)(void*, void*)){
    Repository* repository = malloc(sizeof(Repository));
    repository->capacity = 100;
    repository->length = 0;
    repository->elements = (void**) malloc(sizeof(void*) * repository->capacity);
    for(int i=0;i<repository->capacity;++i)
        repository->elements[i] = NULL;
    repository->elem_eq = eq;
    return repository;
}

int repository_get_length(Repository* repository){
    return repository->length;
}
int repository_get_capacity(Repository* repository) {
    return repository->capacity;
}
void* repository_get_element_at(Repository* repository, int index) {
    if(index>=0 && index<repository->length)
        return repository->elements[index];
    SET_ERROR(OUT_OF_RANGE);
    return NULL;
}

void repository_set_length(Repository* repository, int length) {
    if(length>repository->capacity)
        repository_set_capacity(repository, length);
    repository->length = length;
}
void repository_set_capacity(Repository* repository, int capacity) {
    void** copy = malloc(sizeof(void*)*capacity);
    for(int i=0;i<repository->capacity;++i) {
        // copiem memoria?
        copy[i] = repository->elements[i];
    }
    free(repository->elements);
    repository->elements = copy;
    repository->capacity = capacity;
}
void repository_set_element_at(Repository* repository, int index, void* value) {
    if(index<repository->length && index >=0) {
        if(repository->elements[index] != NULL) free(repository->elements[index]);
        repository->elements[index] = value;
    }
    else SET_ERROR(OUT_OF_RANGE);
}

void repository_add(Repository* repository, void* value){
    if(repository->length > repository->capacity) repository_set_capacity(repository, repository->capacity + repository->capacity/2);
    repository->elements[repository->length++] = value;
}

int repository_index_of(Repository* repository, void* value)
{
    int n = repository_get_length(repository);
    for(int i=0;i<n;++i)
        if(repository->elem_eq(value, repository_get_element_at(repository, i)))
            return i;
    return NOT_FOUND;
}

void repository_delete(Repository* repository)
{
//    for(int i=0;i<repository->length;++i)
//        if(repository->elements[i] != NULL)
//            free(repository->elements[i]);
    free(repository->elements);
    free(repository);
}
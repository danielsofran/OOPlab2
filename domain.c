//
// Created by Daniel on 05.03.2022.
//

#include <math.h>
#include "domain.h"

Medicament* medicament_create_default(){
    Medicament* medicament = malloc(sizeof(Medicament));
    medicament->cod = NULL;
    medicament->nume = NULL;
    medicament->concentratie = 0.0;
    medicament->cantitate = 0;
    return medicament;
}

Medicament* medicament_create(char* cod, char* nume, double concentratie, int cantitate){
    Medicament* medicament = malloc(sizeof(Medicament));
    if(cod==NULL) medicament->cod = NULL;
    else {
        medicament->cod = malloc(sizeof(char) * (strlen(cod) + 1));
        strcpy(medicament->cod, cod);
    }
    if(nume==NULL) medicament->nume = NULL;
    else {
        medicament->nume = malloc(sizeof(char)*(strlen(nume)+1));
        strcpy(medicament->nume, nume);
    }
    medicament->concentratie = concentratie;
    medicament->cantitate = cantitate;
    return medicament;
}

char* medicament_get_cod(Medicament* medicament){
    return medicament->cod;
}
char* medicament_get_nume(Medicament* medicament){
    return medicament->nume;
}
double medicament_get_concentratie(Medicament* medicament){
    return medicament->concentratie;
}
int medicament_get_cantitate(Medicament* medicament){
    return medicament->cantitate;
}

void medicament_set_cod(Medicament* medicament, char* cod){
    medicament->cod = malloc(sizeof(char)*(strlen(cod)+1));
    strcpy(medicament->cod, cod);
}
void medicament_set_nume(Medicament* medicament, char* nume){
    medicament->nume = malloc(sizeof(char)*(strlen(nume)+1));
    strcpy(medicament->nume, nume);
}
void medicament_set_concentratie(Medicament* medicament, double concentratie){
    medicament->concentratie = concentratie;
}
void medicament_set_cantitate(Medicament* medicament, int cantitate){
    medicament->cantitate = cantitate;
}

int medicament_eq(void* m1, void* m2){
    Medicament* medicament1 = (Medicament*)m1;
    Medicament* medicament2 = (Medicament*)m2;
    if(medicament1->cod == NULL || medicament2->cod == NULL) return medicament1->cod == medicament2->cod;
    if(strcmp(medicament1->cod, medicament2->cod) !=0) return 0;

    if(medicament1->nume == NULL || medicament2->cod == NULL) return medicament1->nume == medicament2->nume;
    if(strcmp(medicament1->nume, medicament2->nume) !=0) return 0;

    if(fabs(medicament1->concentratie-medicament2->concentratie)>=1e-6) return 0;
    return 1;
}

void medicament_sterge_stoc(Medicament* medicament){
    medicament->cantitate = 0;
}

void medicament_delete(Medicament* medicament)
{
    free(medicament->cod);
    free(medicament->nume);
    free(medicament);
}
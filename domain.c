//
// Created by Daniel on 05.03.2022.
//

#include <math.h>
#include "domain.h"

Medicament medicament_create_default(){ // creez un medicament
    Medicament medicament;
    strcpy(medicament.cod, "0");
    strcpy(medicament.nume, "medicament");
    medicament.concentratie = 0.0;
    medicament.cantitate = 0;
    return medicament;
}

Medicament medicament_create(char* cod, char* nume, double concentratie, int cantitate){ // creez un medicament cu valorile date
    Medicament medicament;
    strcpy(medicament.cod, cod);
    strcpy(medicament.nume, nume);
    medicament.concentratie = concentratie;
    medicament.cantitate = cantitate;
    return medicament;
}

void medicament_get_cod(Medicament medicament, char* cod){
    // copiaza codul medicamentului dat ca prim parametru in sirul cod
    strcpy(cod, medicament.cod);
}
void medicament_get_nume(Medicament medicament, char* nume){
    // copiaza numele medicamentului dat ca prim parametru in sirul nume
    strcpy(nume, medicament.nume);
}
double medicament_get_concentratie(Medicament medicament){
    // returneaza concentratia medicamentului dat ca prim parametru
    return medicament.concentratie;
}
int medicament_get_cantitate(Medicament medicament){
    // returneaza nr de medicamente 'medicament' din stoc
    return medicament.cantitate;
}

void medicament_set_cod(Medicament* medicament, char* cod){
    // seteaza codul medicamentului dat ca prim parametru la sirul cod
    strcpy(medicament->cod, cod);
}
void medicament_set_nume(Medicament* medicament, char* nume){
    // seteaza numele medicamentului dat ca prim parametru la sirul nume
    strcpy(medicament->nume, nume);
}
void medicament_set_concentratie(Medicament* medicament, double concentratie){
    // seteaza concentratia medicamentului dat ca prim parametru la al doilea parametru, concentratie
    medicament->concentratie = concentratie;
}
void medicament_set_cantitate(Medicament* medicament, int cantitate){
    // seteaza cantitatea medicamentului dat ca prim parametru la al doilea parametru, cantitate
    medicament->cantitate = cantitate;
    (*medicament).cantitate = cantitate;
}

int medicament_eq(Medicament medicament1, Medicament medicament2){
    // verifica daca proprietatile celor 2 medicamente date au aceleasi campuri, exceptie facand cantitatea
    if(strcmp(medicament1.cod, medicament2.cod) !=0) return 0;
    if(strcmp(medicament1.nume, medicament2.nume) !=0) return 0;
    if(fabs(medicament1.concentratie-medicament2.concentratie)>=1e-6) return 0;
    return 1;
}

void medicament_sterge_stoc(Medicament* medicament){
    // sterg stocul, adica setez cantitatea la 0
    medicament->cantitate = 0;
}
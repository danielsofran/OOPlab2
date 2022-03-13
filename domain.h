//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_DOMAIN_H
#define LAB2_DOMAIN_H

#include "string.h"
#include "stdlib.h"

#define LGMAX_COD 20+1
#define LGMAX_NUME 30+1

typedef struct {
    char* cod;
    char* nume;
    double concentratie;
    int cantitate;
} Medicament;

// creez un medicament si il returnez
Medicament* medicament_create_default();
// creez un medicament cu datele date si il returnez
Medicament* medicament_create(char*, char*, double, int);

// copiaza codul medicamentului dat ca prim parametru in sirul cod
char* medicament_get_cod(Medicament*); // getter cod
// copiaza numele medicamentului dat ca prim parametru in sirul nume
char* medicament_get_nume(Medicament*); // getter nume
// returneaza concentratia medicamentului dat ca prim parametru
double medicament_get_concentratie(Medicament*); // getter concentratie
// returneaza nr de medicamente 'medicament' din stoc
int medicament_get_cantitate(Medicament*); // getter cantitate

// seteaza codul medicamentului dat ca prim parametru la sirul cod
void medicament_set_cod(Medicament*, char*); // setter cod
// seteaza numele medicamentului dat ca prim parametru la sirul nume
void medicament_set_nume(Medicament*, char*); // setter nume
// seteaza concentratia medicamentului dat ca prim parametru la al doilea parametru, concentratie
void medicament_set_concentratie(Medicament*, double); // setter concentratie
// seteaza cantitatea medicamentului dat ca prim parametru la al doilea parametru, cantitate
void medicament_set_cantitate(Medicament*, int); // setter cantitate

// verifica daca proprietatile celor 2 medicamente date au aceleasi campuri, exceptie facand cantitatea
int medicament_eq(void*, void*); // operator de egalitate
// sterg stocul, adica setez cantitatea la 0
void medicament_sterge_stoc(Medicament*); // sterg stocul

// eliberare memorie
void medicament_delete(Medicament*);

#endif //LAB2_DOMAIN_H

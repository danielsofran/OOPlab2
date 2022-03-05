//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_DOMAIN_H
#define LAB2_DOMAIN_H

#include "string.h"

#define LGMAX_COD 20+1
#define LGMAX_NUME 30+1

typedef struct {
    char cod[LGMAX_COD];
    char nume[LGMAX_NUME];
    double concentratie;
    int cantitate;
} Medicament;

Medicament medicament_create_default();
Medicament medicament_create(char*, char*, double, int);

void medicament_get_cod(Medicament, char*); // getter cod
void medicament_get_nume(Medicament, char*); // getter nume
double medicament_get_concentratie(Medicament); // getter concentratie
int medicament_get_cantitate(Medicament); // getter cantitate

void medicament_set_cod(Medicament*, char*); // setter cod
void medicament_set_nume(Medicament*, char*); // setter nume
void medicament_set_concentratie(Medicament*, double); // setter concentratie
void medicament_set_cantitate(Medicament*, int); // setter cantitate

int medicament_eq(Medicament, Medicament); // operator de egalitate
void medicament_sterge_stoc(Medicament*); // sterg stocul

#endif //LAB2_DOMAIN_H

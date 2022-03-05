//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_VALIDATOR_H
#define LAB2_VALIDATOR_H

#include "domain.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define VALIDATOR_OK 0
#define EROARE_COD 1
#define EROARE_NUME 2
#define EROARE_CONC 4
#define EROARE_CANT 8

int validate_cod(char*);
int validate_nume(char*);
int validate_concentratie(double);
int validate_cantitate(int);
int validate_madicament(Medicament);

void validate_printerrs(int);

#endif //LAB2_VALIDATOR_H

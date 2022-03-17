//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_UI_H
#define LAB2_UI_H

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)
#include "service.h"

void opt1(Service*); // functionalitate adaugare medicament
void opt2(Service*); // functionalitate actualizare nume si concentratie
void opt3(Service*); // functionalitate stergere stoc la un medicament
void opt4(Service*); // functionalitate afisare medicamente in stoc
void opt5(Service*); // functionalitate sortare
void menu(Service*); // functia care rleaza meniu

void medicament_print(Medicament*); // afiseaza un medicament pe ecran
Medicament* medicament_scan(); // citire date medicament de la tastatura, returneaza Medicamentul citit sau NULL daca citirea a esuat
void repo_print(Repository*); // afisez medicamentele in stoc
void print_errs(int); // afisez erorile corespunzatoare codurilor de eroare

#endif //LAB2_UI_H

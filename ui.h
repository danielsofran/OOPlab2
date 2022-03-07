//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_UI_H
#define LAB2_UI_H

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)
#include "service.h"

void opt1(Service*);
void opt2(Service*);
void opt3(Service*);
void opt4(Service*);
void opt5(Service*);
void menu(Service*);

void medicament_print(Medicament);
Medicament medicament_scan();
void service_print(Service*);
void print_errs(int);

#endif //LAB2_UI_H

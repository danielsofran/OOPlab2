//
// Created by Daniel on 05.03.2022.
//

#ifndef LAB2_UI_H
#define LAB2_UI_H

#include <stdio.h>
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
void printerrs(int); // NOLINT(readability-redundant-declaration)

#endif //LAB2_UI_H

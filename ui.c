//
// Created by Daniel on 05.03.2022.
//

#include "ui.h"

void medicament_print(Medicament medicament){ // afiseaza un medicament pe ecran
    char nume[LGMAX_NUME], cod[LGMAX_COD];
    medicament_get_nume(medicament, nume);
    medicament_get_cod(medicament, cod);
    printf("Cod: %s\tNume: %s\tConcentratie: %0.2f\tCantitate: %d\n",
           cod, nume, medicament_get_concentratie(medicament), medicament_get_cantitate(medicament));
}

Medicament medicament_scan(){ // citire date medicament de la tastatura
    char nume[LGMAX_NUME], cod[LGMAX_COD], scant[10], sconc[10];
    double conc;
    int cant=0;
    printf("Cod:");
    scanf("%s", cod);
    printf("Nume:");
    scanf("%s", nume);
    printf("Concentratie:");
    scanf("%s", sconc);
    printf("Cantitate:");
    scanf("%s", scant);
    // convert strings to numeric
    char *endptr1, *endptr2;
    conc = strtod(sconc, &endptr1);
    if(IS_ERROR(ERANGE)) {
        printf("Concentratie introdusa gresit!\n");
        CLEAR_ERRORS;
        return medicament_create_default();
    }
    cant = strtol(scant, &endptr2, 10);
    if(IS_ERROR(ERANGE)){
        printf("Cantitate introdusa gresit!\n");
        CLEAR_ERRORS;
        return medicament_create_default();
    }
    Medicament rez = medicament_create(cod, nume, conc, cant);
    return rez;
}

void service_print(Service* service)
{
    int length = service_length(*service);
    printf("Numarul de medicamente: %d\n", length);
    for(Medicament* elem= service_iterator(service);length>0;--length)
    {
        medicament_print(*elem);
        ++elem;
    }
}

void printerrs(int cod_eroare){
    // iau erorile si le afisez
    if(cod_eroare>=EROARE_CANT)
        printf("Cantitatea introdusa gresit!\n"),
        cod_eroare -= EROARE_CANT;
    if(cod_eroare>=EROARE_CONC)
        printf("Concentratie introdusa gresit!\n"),
        cod_eroare -= EROARE_CONC;
    if(cod_eroare>=EROARE_NUME)
        printf("Nume introdus gresit!\n"),
        cod_eroare -= EROARE_NUME;
    if(cod_eroare>=EROARE_COD)
        printf("Cod introdus gresit!\n"),
        cod_eroare -= EROARE_COD;
}

void menu(Service* service){ // meniul afisat odata si apelat recursiv
    start:
    printf("\tMeniu:\n\na) Adaugare de noi medicamente. Daca medicamentul este deja in stoc trebuie actualizat cantitatea\n"
           "b) Actualizare medicamente (modificare nume, concentratie pentru un medicament din stoc)\n"
           "c) Stergerea intregului stoc dintr-un medicament dat\n"
           "d) Vizualizare medicamente din stoc, ordonat dupa nume, cantitate (crescator/descrescator)\n"
           "e) Vizualizare lista de medicamente filtrate dupa un criteriu.\n"
           "i) Iesire din aplicatie\n\n");
    read:
    printf("Introduceti comanda:");
    char cmd;
    scanf("%c", &cmd);
    if(isblank(cmd) || cmd=='\n' || cmd == '\0' || cmd == ' ') goto read;
    else if(cmd=='a') opt1(service);
    else if(cmd=='b') opt2(service);
    else if(cmd=='c') opt3(service);
    else if(cmd=='d') opt4(service);
    else if(cmd=='e') opt5(service);
    else if(cmd=='i') goto end;
    else printf("Comanda invalida!\n\n");
    goto start;
    end:
    return;
}
void opt1(Service* service){
    Medicament medicament = medicament_scan();
    int result = service_add(service, medicament);
    if(result != SUCCESS)
        printerrs(result);
}
void opt2(Service* service){}
void opt3(Service* service){}
void opt4(Service* service){ service_print(service);}
void opt5(Service* service){}

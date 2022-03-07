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

void citire_conc(double* nr)
{// citire nr
    char* endptr;
    char sconc[10];
    printf("Concentratie:");
    scanf("%s", sconc);
    *nr = strtod(sconc, &endptr);
    if(IS_ERROR(ERANGE)) {
        printf("Concentratie introdusa gresit!\n");
        CLEAR_ERRORS;
        *nr = EROARE_CONC;
    }
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
{ // afisez medicamentele in stoc
    int length = service_length(*service);
    for(Medicament* elem= service_iterator(service);length>0;--length, ++elem)
        if(medicament_get_cantitate(*elem)>0)
            medicament_print(*elem);
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
    // prima optiune din meniu
    Medicament medicament = medicament_scan();
    int result = service_add(service, medicament);
    if(result != SUCCESS)
        printerrs(result);
    else printf("Operatie efectuata cu succes!\n");
}

void opt2(Service* service){
    // a doua opt din meniu
    char nume[LGMAX_NUME], nounume[LGMAX_NUME], cod[LGMAX_COD];
    double conc, nouaconc;
    printf("Cod:");
    scanf("%s", cod);
    printf("Nume:");
    scanf("%s", nume);
    citire_conc(&conc);
    if(conc == EROARE_CONC) return;
    // noi
    printf("Nume nou:");
    scanf("%s", nounume);
    citire_conc(&nouaconc);
    if(nouaconc == EROARE_CONC) return;
    // service
    int result = service_modify(service, cod, nume, conc, nounume, nouaconc);
    if(result == SUCCESS)
    {
        printf("Operatie efectuata cu succes!\n");
        return;
    }
    if(result == NOT_FOUND)
    {
        printf("Medicamentul nu a fost gasit!\n");
        return;
    }
    printerrs(result);
}

void opt3(Service* service){
    // a treia optiune din meniu
    char cod[LGMAX_COD];
    printf("Cod:");
    scanf("%s", cod);
    int result = service_delete_cant(service, cod);
    if(result == NOT_FOUND)
        printf("Medicamentul nu a fost gasit!\n");
    else printf("Operatie efectuata cu succes!\n");
}

void opt4(Service* service){
    // a patra optiune din meniu
    service_print(service);
}
void opt5(Service* service){
    // a cincea optiune din meniu
}

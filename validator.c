//
// Created by Daniel on 05.03.2022.
//

#include "validator.h"

int validate_cod(char* cod){
    // verific ca codul sa fie strict alfanumeric
    // daca valoarea este invalida, returnez o eroare specifica
    // altfel, returnez VALIDATOR_OK
    if(strlen(cod) == 0)
        return EROARE_COD;
    for(int i=0; cod[i]; ++i)
        if(!isalnum(cod[i]))
            return EROARE_COD;
    return VALIDATOR_OK;
}
int validate_nume(char* nume){
    // verifica ca nume sa contina doar litere si spatii
    // daca valoarea este invalida, returnez o eroare specifica
    // altfel, returnez VALIDATOR_OK
    if(strlen(nume) == 0)
        return EROARE_NUME;
    for(int i=0; nume[i]; ++i)
        if(!isalpha(nume[i]) && !isblank(nume[i]))
            return EROARE_NUME;
    return VALIDATOR_OK;
}
int validate_concentratie(double concentratie){
    // verific daca concentratia este sau nu un procent pozitiv
    // daca valoarea este invalida, returnez o eroare specifica
    // altfel, returnez VALIDATOR_OK
    if(concentratie<=0 || concentratie>100.0)
        return EROARE_CONC;
    return VALIDATOR_OK;
}
int validate_cantitate(int cantitate){
    // verific daca cantitatea e nr pozitiv
    // daca valoarea este invalida, returnez o eroare specifica
    // altfel, returnez VALIDATOR_OK
    if(cantitate > 0)
        return VALIDATOR_OK;
    return EROARE_CANT;
}
int validate_madicament(Medicament medicament){
    // verific toate proprietatile medicamentului
    char nume[LGMAX_NUME], cod[LGMAX_COD];
    medicament_get_nume(medicament, nume);
    medicament_get_cod(medicament, cod);
    return  validate_cod(cod) +
            validate_nume(nume) +
            validate_concentratie(medicament_get_concentratie(medicament)) +
            validate_cantitate(medicament_get_cantitate(medicament));
}
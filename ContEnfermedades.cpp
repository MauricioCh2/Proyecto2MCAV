//
// Created by eolic on 12/11/2023.
//

#include "ContEnfermedades.h"

ContEnfermedades::ContEnfermedades() {
    can = 0;
    tam = 100;
    for (int i = 0; i < tam; i++)
        vec[i] = NULL;
}

ContEnfermedades::~ContEnfermedades() {
    for (int i = 0; i < can; i++)
        delete vec[i];
}

int ContEnfermedades::getCantidad() {
    return can;
}

Enfermedad* ContEnfermedades::obtEnfermedadEnPos(int i) {
    return vec[i];
}

bool ContEnfermedades::ingresaEnfermedade(Enfermedad* pac) {
    if (can < tam) {
        vec[can++] = pac;
        return true;
    }
    else
        return false;
}

void ContEnfermedades::recuperaEnfermedades(ifstream& archE) {
    Enfermedad* enAux = new Enfermedad();
    while(!archE.eof()){
        enAux = enAux->recuperaEnfermedad(archE);
        if(enAux!= nullptr){
            ingresaEnfermedade(enAux);
        }
    }
    archE.close();
     0;
}

void ContEnfermedades::limpiaContenedor() {
    for (int i = 0; i < can; i++)
        delete vec[i];
    for (int i = 0; i < tam; i++)
        vec[i] = NULL;
    can = 0;
}

string ContEnfermedades::toString() {
    stringstream s;
    for (int i = 0; i < can; i++) {
        s << vec[i]->toString() << endl;
    }
    return s.str();
}

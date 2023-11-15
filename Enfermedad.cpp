//
// Created by eolic on 13/11/2023.
//

#include "Enfermedad.h"

Enfermedad::Enfermedad(string nE, string sE) {
    nombreEnferm = nE;
    secEnferm = sE;
}

Enfermedad::~Enfermedad() {
}

string Enfermedad::getNombEnfermedad() { return nombreEnferm; }
string Enfermedad::getSecEnfermedad()  { return secEnferm; }

string Enfermedad::toString() {
    stringstream s;
    s << "Nombre de la enfermedad =" << nombreEnferm <<endl
      << "Secuencia de la enfermedad = " << secEnferm << endl << endl;
    return s.str();
}

Enfermedad* Enfermedad::recuperaEnfermedad(istream& archE) {
    string nombreE = " ", secE = " ";

    getline(archE, nombreE, ',');
    getline(archE, secE, '\n');
    if(!nombreE.empty() && !secE.empty()) {
        return new Enfermedad(nombreE, secE);
    }
    return nullptr;
}

//
// Created by eolic on 12/11/2023.
//

#include "AplicacionADN.h"


AplicacionADN::AplicacionADN() {
    cp = new ContPacientes();
    ce = new ContEnfermedades();
}

AplicacionADN::~AplicacionADN() {
    if (cp != NULL) delete cp;
    if (ce != NULL) delete ce;
}

ContPacientes* AplicacionADN::getContenPacientes() {
    return cp;
}

ContEnfermedades* AplicacionADN::getContenEnfermedades() {
    return ce;
}

void AplicacionADN::cargarPacientes() {
    ifstream f_Pacientes;
    f_Pacientes.open("pacientes.txt");
    cp->recuperaPacientes(f_Pacientes);
}

void AplicacionADN::cargarEnfermedades() {
    ifstream f_enfermedades;
    f_enfermedades.open("enfermedades.txt");
    ce->recuperaEnfermedades(f_enfermedades);
}

void AplicacionADN::reporte(IReporte* irep) {
    //...

}

// No necesarios para el examen..

void AplicacionADN::verPacientesEnPantalla() {
    cout << cp->toString() << endl;
}

void AplicacionADN::verEnfermedadesEnPantalla() {
    cout << ce->toString() << endl;
}

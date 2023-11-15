//
// Created by eolic on 12/11/2023.
//

#pragma once
#include"ContEnfermedades.h"
#include"ContPacientes.h"
#include"IReporte.h"
#include<fstream>
using namespace std;

class AplicacionADN {
private:
    ContPacientes* cp;
    ContEnfermedades* ce;
public:
    AplicacionADN();
    virtual ~AplicacionADN();
    ContPacientes* getContenPacientes();
    ContEnfermedades* getContenEnfermedades();
    void cargarPacientes();
    void cargarEnfermedades();
    void reporte(IReporte*);
    string impNombres(int cont, string nom);
    // No necesarios para el examen..
    void verPacientesEnPantalla();
    void verEnfermedadesEnPantalla();
};


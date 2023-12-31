//
// Created by eolic on 13/11/2023.
//

#pragma once

#include <fstream>
#include"Paciente.h"

using namespace std;

class ContPacientes {
private:
    Paciente* vec[100];
    int can;
    int tam;
public:
    ContPacientes();
    virtual ~ContPacientes();
    int getCantidad();
    Paciente* obtPacienteEnPos(int);
    bool ingresaPaciente(Paciente*);
    void recuperaPacientes(ifstream&);
    void limpiaContenedor();
    string toString();
};
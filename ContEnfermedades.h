//
// Created by eolic on 12/11/2023.
//

#pragma once
#include<fstream>
#include"Enfermedad.h"
using namespace std;

class ContEnfermedades {
private:
    Enfermedad* vec[100];
    int can;
    int tam;
public:
    ContEnfermedades();
    virtual ~ContEnfermedades();
    int getCantidad();
    Enfermedad* obtEnfermedadEnPos(int);
    bool ingresaEnfermedade(Enfermedad*);
    void recuperaEnfermedades(ifstream&);
    void limpiaContenedor();
    string toString();
};

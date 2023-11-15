//
// Created by eolic on 13/11/2023.
//

#pragma once
#include"Paciente.h"
#include"ContEnfermedades.h"
using namespace std;

class IReporte {
public:
    virtual void encabezado() = 0;
    virtual void analisis(Paciente *p, ContEnfermedades *ce) = 0;
    virtual int AplicacionADNcalcularConcentracion(const string& textoBuscar, const string& textoBase);
};
//
// Created by eolic on 13/11/2023.
//
#pragma once
#include"Paciente.h"
#include"ContEnfermedades.h"
#include"InterfazUsuario.h"
using namespace std;

class RepAnalisis3 : public IReporte {
public:
    RepAnalisis3();
    virtual ~RepAnalisis3();
    void encabezado();
    void analisis(Paciente*, ContEnfermedades*);
};
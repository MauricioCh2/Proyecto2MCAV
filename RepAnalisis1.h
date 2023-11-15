//
// Created by eolic on 13/11/2023.
//

#pragma once
#include"Paciente.h"
#include"ContEnfermedades.h"
#include"InterfazUsuario.h"
using namespace std;

class RepAnalisis1 : public IReporte {
public:
    RepAnalisis1();
    virtual ~RepAnalisis1();
    void encabezado();
    void analisis(Paciente*,  ContEnfermedades*);
};
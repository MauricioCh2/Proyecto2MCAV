//
// Created by eolic on 13/11/2023.
//

#pragma once
#include"Paciente.h"
#include"ContEnfermedades.h"
#include"InterfazUsuario.h"
using namespace std;

class RepAnalisis2 : public IReporte {
public:
    RepAnalisis2();
    virtual ~RepAnalisis2();
    void encabezado();
    void analisis(Paciente*, ContEnfermedades*);
};
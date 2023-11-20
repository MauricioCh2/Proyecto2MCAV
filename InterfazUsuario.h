//
// Created by eolic on 13/11/2023.
//

#pragma once
#include"AplicacionADN.h"
#include "Utilities.h"
using namespace std;

// Las interfaces de usuario son clases de servicio.

class InterfazUsuario {
public:
    static int menu();
    static void ventanaCargarPacientes(AplicacionADN*);
    static void ventanaCargaEnfermedades(AplicacionADN*);
    static void ventanaParaEncabezadoAnalisis1();
    static void ventanaParaEncabezadoAnalisis2();
    static void ventanaParaEncabezadoAnalisis3();
};
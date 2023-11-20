//
// Created by eolic on 13/11/2023.
//

#include "RepAnalisis1.h"

RepAnalisis1::RepAnalisis1() {}
RepAnalisis1::~RepAnalisis1() {}

void RepAnalisis1::encabezado() {
    InterfazUsuario::ventanaParaEncabezadoAnalisis1();
}

void RepAnalisis1::analisis(Paciente* p, ContEnfermedades* ce) {
    Enfermedad *ptrE = nullptr;
    string secuencia = p->getSecuencia();
    int susceptibilidad = 0;
    for (int i = 0; i < ce->getCantidad(); i++) {
        ptrE = ce->obtEnfermedadEnPos(i);
        susceptibilidad = AplicacionADNcalcularConcentracion(ptrE->getSecEnfermedad(), secuencia);
        if (susceptibilidad > 0) {
            cout << "\x1b[36m    ." << ptrE->getNombEnfermedad()<<" \x1b[0m" << endl;
        }
    }
}
//-----------------------FIN DE LA CLASE RepAnalisis1------------------------


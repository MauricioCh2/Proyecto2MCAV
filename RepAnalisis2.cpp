//
// Created by eolic on 13/11/2023.
//

#include "RepAnalisis2.h"

RepAnalisis2::RepAnalisis2() {}
RepAnalisis2::~RepAnalisis2() {}

void RepAnalisis2::encabezado() {
    InterfazUsuario::ventanaParaEncabezadoAnalisis2();
}

void RepAnalisis2::analisis(Paciente* p,  ContEnfermedades* ce) {
//    cantA= AplicacionADNcalcularConcentracion("A", secuencia);
//    cantT= AplicacionADNcalcularConcentracion("T", secuencia);
//    cantG= AplicacionADNcalcularConcentracion("G", secuencia);
//    cantC= AplicacionADNcalcularConcentracion("C", secuencia);
    string secuencia = p->getSecuencia();
    int totalBaseN = secuencia.length();
    int A = 0;
    int T = 0;
    int C = 0;
    int G = 0;

    for (int i = 0; i < totalBaseN; i++) {
        if (secuencia[i] == 'A') {
            A++;
        } else if (secuencia[i] == 'T') {
            T++;
        } else if (secuencia[i] == 'C') {
            C++;
        } else if (secuencia[i] == 'G') {
            G++;
        }
    }
    cout << "   A-" << (int)(A*100/totalBaseN) << "%, T-" << (int)(T*100/totalBaseN) <<  "%, G-" << (int)(G*100/totalBaseN) << "%, C-" << (int)(C*100/totalBaseN) << "%." << endl;
}
//-----------------------FIN DE LA CLASE RepAnalisis2------------------------



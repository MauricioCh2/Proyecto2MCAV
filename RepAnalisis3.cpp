//
// Created by eolic on 13/11/2023.
//

#include "RepAnalisis3.h"

RepAnalisis3::RepAnalisis3() {}
RepAnalisis3::~RepAnalisis3() {}

void RepAnalisis3::encabezado() {
    InterfazUsuario::ventanaParaEncabezadoAnalisis3();
}

void RepAnalisis3::analisis(Paciente* p,  ContEnfermedades* ce) {

    Enfermedad* enfAux = nullptr;
    string secuencia = p->getSecuencia();
    int posibilidadEnf = 0;
    int contE =1;
    for (int i = 0; i < ce->getCantidad(); i++) {
        enfAux = ce->obtEnfermedadEnPos(i);
        posibilidadEnf= AplicacionADNcalcularConcentracion(enfAux->getSecEnfermedad(), secuencia);
        if(posibilidadEnf!=0) {
            cout << impAnalisis(contE, enfAux->getNombEnfermedad(), posibilidadEnf);
            contE++;
        }
    }
    if(contE == 1){
        cout << "   Sin suceptibilidad de enfermedades de origen genetico"<< endl;
    }

}

string RepAnalisis3::impAnalisis(int cantE, string nombreE, int pos) {
    stringstream  s;
    if(pos!=0){
        s<<"    "<<char('a'+ cantE -1 )<<". "<<nombreE << "  ";//char('a'+ cantE -1 ) es para poder imprimirlo como letras y no como numeros
        if(pos==1){
            s<<"\x1b[33mBAJA \x1b[0m";
        }
        if(pos==2){
            s<<"\x1B[38;2;255;128;0mMEDIA \x1b[0m";
        }
        if(pos>=3){
            s<<"\x1b[31mALTA\x1b[0m";
        }
        s<<endl;
    }

    return s.str();
}


//-----------------------FIN DE LA CLASE RepAnalisis3------------------------



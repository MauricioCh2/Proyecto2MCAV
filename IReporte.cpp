//
// Created by eolic on 13/11/2023.
//

#include "IReporte.h"

// Código de apoyo....
int IReporte:: AplicacionADNcalcularConcentracion(const string& textoBuscar, const string& textoBase) {
    int repeticiones = 0;
    unsigned long index = 0; // la posición donde se encuentra la letra
    // El siguiente ciclo permite recorrer el string para identificar las veces que se
    // repite un carácter
    while ((index = textoBase.find(textoBuscar, index)) != std::string::npos) {
        index += textoBuscar.length();
        repeticiones++;
    }
    return repeticiones;
}
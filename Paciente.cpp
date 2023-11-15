//
// Created by eolic on 13/11/2023.
//

#include "Paciente.h"

Paciente::Paciente(string tel, string nom, string idi, string corr, string sec) {
    id = idi;
    nombre = nom;
    telefono = tel;
    correo = corr;
    secuencia = sec;
}

Paciente::~Paciente() {
}

string Paciente::getId() { return id; }
string Paciente::getNombre() { return nombre; }
string Paciente::getTelefono() { return telefono; }
string Paciente::getCorreo() { return correo; }
string Paciente::getSecuencia() { return secuencia; }

string Paciente::toString() {
    stringstream s;
    s <<"Telefono: "<< telefono << "  ID =" << id << "   Nombre = " << nombre <<" Correo: "<< correo<<endl
      << "Secuencia = " << secuencia << endl <<endl;
    return s.str();
}

Paciente* Paciente::recuperaPaciente(istream& archP) {
    string telefono = " ", nombre = " ", cedula=" ", correo=" ", secuencia=" ";

    getline(archP, telefono, ',');
    getline(archP, nombre, ',');
    getline(archP, cedula, ',');
    getline(archP, correo, ',');
    getline(archP, secuencia, '\n');
    if(!telefono.empty() && !nombre.empty() && !telefono.empty()&& !correo.empty()&& !secuencia.empty()) {
        return new Paciente(telefono, nombre, cedula, correo, secuencia);
    }
    return nullptr;
}
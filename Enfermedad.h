//
// Created by eolic on 13/11/2023.
//

#pragma once
#include<iostream>
#include<sstream>
using namespace std;
#define DELIMITA_CAMPO //...
#define DELIMITA_REGISTRO //...

class Enfermedad {
private:
    string nombreEnferm;
    string secEnferm;

public:
    Enfermedad(string = "", string = "");
    virtual ~Enfermedad();
    string getNombEnfermedad();
    string getSecEnfermedad();
    string toString();
    static Enfermedad* recuperaEnfermedad(istream&);
};
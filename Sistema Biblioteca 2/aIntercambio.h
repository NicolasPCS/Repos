/////////////////////////////////////////////////////////////////////////////////
// C�digo   	: aIntercambio.h
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripci�n	: Declaraci�n de la clase derivada alumnoIntercambio
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "Persona.h"
using namespace std;

class alumnoIntercambio : public Persona {
protected:
    string nombre;
    string apellido;
    string pais;
public:
    alumnoIntercambio() : Persona() {
        nombre = " ";
        apellido = " ";
        pais = " ";
    }

    // Declaraci�n de los metodos ingresar y mostrar(), mismos de la
    // clase base Persona
    void ingresar();
    void mostrar();
};


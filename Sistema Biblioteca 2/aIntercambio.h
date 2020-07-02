/////////////////////////////////////////////////////////////////////////////////
// Código   	: aIntercambio.h
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Declaración de la clase derivada alumnoIntercambio
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

    // Declaración de los metodos ingresar y mostrar(), mismos de la
    // clase base Persona
    void ingresar();
    void mostrar();
};


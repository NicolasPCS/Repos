/////////////////////////////////////////////////////////////////
// C�digo   	: Source.cpp
// Autor		: Nicolas
// Fecha		: 15/06/2020
// Descripci�n	: Declaracion de la clase Persona
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
using namespace std;

class Persona {
protected:
	string dni;
	string edad;
	string eCivil;
public:
	Persona();
	// Declaramos el destructor de la clase Persona
	// como default
	~Persona() = default;
	void ingresarDatosPersona();
	void mostrarDatosPersona();
};



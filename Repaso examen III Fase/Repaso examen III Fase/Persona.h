#pragma once
#include <iostream>
#include "Fecha.h"
using namespace std;
class Persona {
private:
	string nombre;
	string apellido;
	Fecha<int> fechaNac;
	int edad;
public:
	Persona() {
		nombre = "";
		apellido = "";
		edad = 0;
	}
	virtual void ingresar();
	virtual void mostrar();
};


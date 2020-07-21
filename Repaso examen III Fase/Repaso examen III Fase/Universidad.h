// Clase Abstracta Univeridad

#pragma once
#include <iostream>
using namespace std;
class Universidad {
protected: 
	string nombreU;
public:

	// Definicion de metodos virtuales puros
	virtual void ingresarU() = 0;
	virtual void mostrarU() = 0;
};


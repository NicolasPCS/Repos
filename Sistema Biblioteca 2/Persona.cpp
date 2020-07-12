/////////////////////////////////////////////////////////////////////////////////
// Código   	: Source.cpp
// Autor		: Nicolas
// Fecha		: 15/06/2020
// Descripción	: Definicion de atributos y metodos de la
//				  clase Persona
/////////////////////////////////////////////////////////////////////////////////
#include "Persona.h"
#include "string"
#include <iostream>
using namespace std;

Persona::Persona() {
	dni = " ";
	edad = " ";
	eCivil = " ";
}

// Definición de los metodos ingresar() y mostrar()
void Persona::ingresar() {
	cout << "\n\t(P)DNI: "; cin.ignore(); std::getline(cin, this->dni);
	cout << "\t(P)Edad: "; cin.ignore(); std::getline(cin, this->edad);
	cout << "\t(P)Estado civil: "; cin.ignore(); std::getline(cin, this->eCivil);
	// Hacemos el llamado al metodo ingresar() de la clase Fecha
	// NOTA: se le envia como parametro "this" para que el tipo de dato haga
	// referencia al objeto que se esta creando de la clase Fecha
	fecha.ingresar(this);
}
void Persona::mostrar() {
	cout << "\n\t(P)DNI: " << this->dni << endl;
	cout << "\t(P)Edad: " << this->edad << endl;
	cout << "\t(P)Estado civil: " << this->eCivil << endl;
	// Hacemos el llamado al metodo mostrar() de la clase Fecha
	// NOTA: se le envia como parametro "this" para que el tipo de dato haga
	// referencia al objeto que se esta creando de la clase Fecha
	fecha.mostrar(this);
}
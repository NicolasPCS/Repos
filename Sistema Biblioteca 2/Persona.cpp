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

// cout << "\tEdad: "; cin.ignore(); cin >> this->edad;
// cout << "\tEdad: " << this->edad << endl;

Persona::Persona() {
	dni = " ";
	edad = " ";
	eCivil = " ";
}
void Persona::ingresarDatosPersona() {
	cout << "\n\t(P)DNI: "; cin.ignore(); std::getline(cin, this->dni);
	cout << "\t(P)Edad: "; cin.ignore(); std::getline(cin, this->edad);
	cout << "\t(P)Estado civil: "; cin.ignore(); std::getline(cin, this->eCivil);
}
void Persona::mostrarDatosPersona() {
	cout << "\n\t(P)DNI: " << this->dni << endl;
	cout << "\t(P)Edad: " << this->edad << endl;
	cout << "\t(P)Estado civil: " << this->eCivil << endl;
}

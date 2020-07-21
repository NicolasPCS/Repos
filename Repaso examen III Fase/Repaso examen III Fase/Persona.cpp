#include <iostream>
#include "string"
#include "Persona.h"
using namespace std;
void Persona::ingresar()
{
	cout << "Nombre: "; cin.ignore(); std::getline(cin, this->nombre);
	cout << "Apellido: "; cin.ignore(); std::getline(cin, this->apellido);
	cout << "Edad: "; cin >> edad;
	cin >> fechaNac;
}

void Persona::mostrar()
{
	cout << "\nNombre: " << nombre;
	cout << "\nApellido: " << apellido;
	cout << "\nEdad: " << edad;
	cout << fechaNac;
}

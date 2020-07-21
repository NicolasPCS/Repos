#include <iostream>
#include "string"
#include "Docente.h"
#include "Universidad.h"
using namespace std;
// Metodos de la clase abstracta universidad
void Docente::ingresarU()
{
	cout << "Nombre de la universidad: "; cin >> Universidad::nombreU;
}

void Docente::mostrarU()
{
	cout << "\nNombre de la universidad: " << Universidad::nombreU;
}

// Metodos de la clase Docente
void Docente::ingresar()
{
	ingresarU();
	// Refinamiento
	Persona::ingresar();
	cout << "Codigo Docente: "; cin.ignore(); std::getline(cin, this->codigoDocente);
	cout << "Numero de cursos que dicta: "; cin >> cursos;
}

void Docente::mostrar()
{
	mostrarU();
	// Refinamiento
	Persona::mostrar();
	cout << "\nCodigo Docente: " << codigoDocente;
	cout << "\nNumero de cursos que dicta: " << cursos;
}

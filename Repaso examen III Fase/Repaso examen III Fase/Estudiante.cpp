#include <iostream>
#include "string"
#include "Estudiante.h"
#include "Universidad.h"
using namespace std;
// Metodos de la clase abstracta universidad
void Estudiante::ingresarU()
{
	cout << "\nNombre de la universidad: "; cin >> Universidad::nombreU;
}

void Estudiante::mostrarU()
{
	cout << "\n\nNombre de la universidad: " << Universidad::nombreU;
}

// Metodos de la clase Docente
void Estudiante::ingresar()
{
	ingresarU();
	// Refinamiento
	Persona::ingresar();
	cout << "Codigo Estudiante: "; cin.ignore(); std::getline(cin, this->codigoEstudiante);
	cout << "Numero de cursos que cursa: "; cin >> cursos;
}
void Estudiante::mostrar()
{
	mostrarU();
	// Refinamiento
	Persona::mostrar();
	cout << "\nCodigo Estudiante: " << codigoEstudiante;
	cout << "\nNumero de cursos que cursa: " << cursos;
}
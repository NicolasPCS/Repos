#pragma once
#include <iostream>
#include "Persona.h"
#include "Universidad.h"
using namespace std;

class alumnoIntercambio : public Persona, Universidad {
private:
	string codigoEstudiante;
	string pais;
	int cursos;
public:
	alumnoIntercambio() {
		codigoEstudiante = "";
		pais = "";
		cursos = 0;
	}

	// Redeclaración de metodos virtuales puros de la clase universidad
	void ingresarU();
	void mostrarU();

	// Reutilizacion de metodos virtuales
	// Template de funciones
	template <class A>
	A ingresar(A);

	template <class A>
	A mostrar(A);
};

// Definicion de los template de clase alumnoIntercambio
template<class A>
inline A alumnoIntercambio::ingresar(A)
{
	ingresarU();
	// Refinamiento
	Persona::ingresar();
	cout << "Codigo Estudiante: "; cin.ignore(); std::getline(cin, this->codigoEstudiante);
	cout << "Pais de procedencia: "; cin.ignore(); std::getline(cin, this->pais);
	cout << "Numero de cursos que cursa: "; cin >> cursos;
	return A();
}

template<class A>
inline A alumnoIntercambio::mostrar(A)
{
	mostrarU();
	// Refinamiento
	Persona::mostrar();
	cout << "\nCodigo Estudiante: " << codigoEstudiante;
	cout << "\nPais de procedencia: " << pais;
	cout << "\nNumero de cursos que cursa: " << cursos;
	return A();
}

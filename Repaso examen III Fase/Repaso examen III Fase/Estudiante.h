#pragma once
#include <iostream>
#include "Persona.h"
#include "Universidad.h"
using namespace std;
class Estudiante : public Persona, Universidad {
private:
	string codigoEstudiante;
	int cursos;
public:
	Estudiante() {
		codigoEstudiante = "";
		cursos = 0;
	}
	// Redeclaración de metodos virtuales puros de la clase universidad
	void ingresarU();
	void mostrarU();

	// Reutilizacion de metodos virtuales
	// Reemplazo
	void ingresar();
	void mostrar();
};


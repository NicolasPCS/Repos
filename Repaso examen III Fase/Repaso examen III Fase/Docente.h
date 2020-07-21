#pragma once
#include "Persona.h"
#include "Universidad.h"
class Docente : public Persona, Universidad {
private:
	string codigoDocente;
	int cursos;
public:
	Docente() {
		codigoDocente = "";
		cursos = 0;
	}
	// Redeclaraci�n de metodos virtuales puros de la clase universidad
	void ingresarU();
	void mostrarU();

	// Reutilizacion de metodos virtuales
	// Reemplazo
	void ingresar();
	void mostrar();
};


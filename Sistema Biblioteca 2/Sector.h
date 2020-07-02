/////////////////////////////////////////////////////////////////////////////////
// C�digo   	: Sector.h
// Autor		: Nicolas
// Fecha		: 15/06/2020
// Descripci�n	: Declaracion de la clase base Sector
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
using namespace std;
class Sector {
protected:
	string nombreSec;
	int numLibros;
public:
	Sector();
	~Sector() = default;
	void ingresarSector();
	void mostrarSector();

	// si una clase tiene al menos una funcion virtual pura, entonces esa clase 
	// se dice que es "abstracta"
	// Definici�n del metodo virtual puro mostrarSector()


	
};


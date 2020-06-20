/////////////////////////////////////////////////////////////////////////////////
// Código   	: Sector.h
// Autor		: Nicolas
// Fecha		: 15/06/2020
// Descripción	: Declaracion de la clase base Sector
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
};


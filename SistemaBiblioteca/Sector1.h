#pragma once
#include <iostream>
using namespace std;
class Sector {
protected:
	string nombreSec;
	int numLibros;
public:
	Sector();
	void ingresarSector();
	void mostrarSector();
};


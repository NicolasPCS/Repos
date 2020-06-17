#include "Sector1.h"

Sector::Sector() {
	nombreSec = " ";
	numLibros = 0;
}

void Sector::ingresarSector() {
	cout << "\tIngresar nombre de sector: "; cin >> nombreSec;
	cout << "\tNumero de libros en sector: "; cin >> numLibros;
}

void Sector::mostrarSector() {
	cout << "\tNombre del sector: " << nombreSec << endl;
	cout << "\tCantidad libros en sector: " << numLibros << endl;
}

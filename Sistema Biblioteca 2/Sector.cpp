#include "Sector.h"

Sector::Sector() {
	nombreSec = " ";
	numLibros = 0;
}
void Sector::ingresarSector() {
	cout << "\t(S)Ingresar nombre de sector: "; cin >> nombreSec;
	cout << "\t(S)Numero de libros en sector: "; cin >> numLibros;
}
void Sector::mostrarSector() {
	cout << "\t(S)Nombre del sector: " << nombreSec << endl;
	cout << "\t(S)Cantidad libros en sector: " << numLibros << endl;
}

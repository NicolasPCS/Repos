#include "alumnoIntercambio.h"
#include <iostream>
#include "string"
#include "Universidad.h"
using namespace std;
// Metodos de la clase abstracta universidad
void alumnoIntercambio::ingresarU()
{
	cout << "Nombre de la universidad: "; cin >> Universidad::nombreU;
}

void alumnoIntercambio::mostrarU()
{
	cout << "\nNombre de la universidad: " << Universidad::nombreU;
}

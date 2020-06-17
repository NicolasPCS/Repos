/////////////////////////////////////////////////////////////////////////////////
// Código   	: Libros.cpp
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Definicion de la clase libros
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Libros.h"
using namespace std;

Libro::Libro() {
	codigo = 0;
	tituloLibro = "";
	genero = "";
	numPaginas = 0;
	idioma = "";
	autor = "";
}
// Fin del archivo Libros.cpp
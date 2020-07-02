/////////////////////////////////////////////////////////////////////////////////
// Código   	: Libros.h
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Declaración de la clase derivada Libro
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include "Alumnos.h"
#include "Sector.h"
using namespace std;
class Alumno;
class Libro : protected Sector {
protected:
	string genero;
	string tituloLibro;
	string autor;
	int numPaginas;
	string idioma;
	// Definimos un atributo estatico
	static int contadorLibros;
	Alumno* alumnos;
public:
	Libro() : Sector() {
		codigo = 0;
		tituloLibro = "";
		genero = "";
		numPaginas = 0;
		idioma = "";
		autor = "";
		// Inicializamos valores a los atributos protegidos
		// de la clase Sector (NOTA: si los atributos fueran privados
		// no podrian ser accedidos desde la clase derivada)
		nombreSec = " ";
		numLibros = 0;
	}
	// Declaramos el constructor de la clase Libro como privado 
	~Libro() = default;
	int codigo;
	// Definimos un metodo estatico getContadorAlumnos
	// el cual solo podra acceder a los atributos
	// estaticos de la clase Libro
	static int getContadorLibros() {
		return contadorLibros++;
	}
	// Definimos un metodo estatico setContadorAlumnos
	static void setContadorLibros() {
		contadorLibros = 1;
	}
	// Definimos una funcion amiga para que muestre los
	// datos de un objeto, el cual a su vez se encuentra
	// en un array de objetos estatico
	friend void amigaMostrarDatoLibros(Libro*, int);
	// En la clase Libros, especificador de acceso public
	// Definimos la sobrecarga de los operadores
	// de entrada y salida de datos en la clase Libro
	friend ostream& operator<<(ostream&, Libro&);
	friend istream& operator>>(istream&, Libro&);

	// Redeclaracion mel metodo virtual puro de la clase base Sector
	// void mostrarSector();
};
// Fin del archivo Libros.h
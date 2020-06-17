/////////////////////////////////////////////////////////////////////////////////
// Código   	: Libros.h
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Declaración de la clase Libro
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
	Libro();
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
};
// Fin del archivo Libros.h
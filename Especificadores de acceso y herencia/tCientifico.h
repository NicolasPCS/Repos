#pragma once
#include "Publicacion.h"
#include "Libro.h"
class tCientifico : protected Libro {
private:
	string titulo;
	string autor;
public:
	tCientifico(string revista, string isbn, string nombre, string edicion,
		string titulo, string autor) : Libro(revista, isbn, nombre, edicion);
	void ingresarA();
	void mostrarA();
};

tCientifico::tCientifico(string revista, string isbn, string nombre, string edicion,
	string titulo, string autor) : Libro(revista, isbn, nombre, edicion) {
	this->titulo = titulo;
	this->autor = autor;
}
void tCientifico::ingresarA() {
	ingresar();
	cout << "Titulo: "; cin >> titulo;
	cout << "Autor: "; cin >> autor;
}
void tCientifico::mostrarA() {
	mostrar();
	cout << "titulo: " << titulo << endl;
	cout << "autor: " << autor << endl;
}
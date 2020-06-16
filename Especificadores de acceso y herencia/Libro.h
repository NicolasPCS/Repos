#pragma once
#include "Publicacion.h"
#include "string"
class Libro : public Publicacion {
private:
	string nombre;
protected:
	string edicion;
public:
	Libro(string revista, string isbn, string nombre, string edicion) : Publicacion(revista, isbn) {
		this->nombre = nombre;
		this->edicion = edicion;
	}
	void ingresarL();
	void mostrarL();
	friend ostream& operator<<(ostream&, Libro&);
	friend istream& operator>>(istream&, Libro&);
};

ostream& operator<<(ostream& out, Libro& Libro) {
    out << "\n====== Datos del Libro ======\n";
    out << "\n\Nombre: " << Libro.nombre << endl;
    out << "\tEdicion: " << Libro.edicion << endl;
    return out;
}
istream& operator>>(istream& in, Libro& Libro) {
    cout << "\n====== Ingresar datos del Libro ======\n";
    cout << "\n\tNombre: "; in.ignore(); in >> Libro.nombre;
    cout << "\tEdicion: "; in.ignore(); std::getline(in, Libro.edicion);
    cout << endl;
    return in;
}
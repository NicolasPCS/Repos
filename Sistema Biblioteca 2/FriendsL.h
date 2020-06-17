/////////////////////////////////////////////////////////////////////////////////
// Código   	: FriendsL.h
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Declaración de las funciones amigas de la clase libro
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include <string>
#include "Libros.h"
using namespace std;
// Creamos el cuerpo de la funcion amiga, la cual muestra
// los datos de un objeto
// Se observa tambien que la funcion amiga se crea como una
// funcion inline, ello debido a que estas funciones son
// llamadas cuando se haga el llamado a dicha funcion
inline void amigaMostrarDatoLibros(Libro* l, int n) {
    for (int i = 0; i < n; i++) {
        cout << l[i];
    }
}
// En el archivo FriendsL.h
// Creamos el cuerpo de las sobrecargas de operadores
// de entrada y salida de datos
ostream& operator<<(ostream& out, Libro& Libro) {
    out << "\n====== Datos del Libro ======\n";
    out << "\n\tCodigo: " << Libro.codigo << endl;
    out << "\tTitulo: " << Libro.tituloLibro << endl;
    out << "\tGenero: " << Libro.genero << endl;
    out << "\tAutor: " << Libro.autor << endl;
    out << "\tNumero de paginas: " << Libro.numPaginas << endl;
    out << "\tIdioma: " << Libro.idioma << endl;
    cout << "\tNum libro en el sistema: " << Libro::getContadorLibros() << endl << endl;
    return out;
}
istream& operator>>(istream& in, Libro& Libro) {
    cout << "\n====== Ingresar datos del Libro ======\n";
    cout << "\n\tCodigo: "; in.ignore(); in >> Libro.codigo;
    cout << "\tTitulo: "; in.ignore(); std::getline(in, Libro.tituloLibro);
    cout << "\tGenero: "; std::getline(in, Libro.genero);
    cout << "\tAutor: "; std::getline(in, Libro.autor);
    cout << "\tNumero de paginas: "; in >> Libro.numPaginas;
    cout << "\tIdioma: "; in.ignore(); std::getline(in, Libro.idioma);
    Libro::setContadorLibros();
    cout << endl;
    return in;
}
// Fin del archivo FriendsL.h
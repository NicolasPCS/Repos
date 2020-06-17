/////////////////////////////////////////////////////////////////////////////////
// Código   	: Alumnos.cpp
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Definicion de la clase Alumnos
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "string"
#include "Alumnos.h"
using namespace std;
/*Alumno::Alumno()
{
    idAlumno = 0;
    nombre = " ";
    apellido = " ";
    codigo = " ";
}*/
// Creamos el cuerpo de los metodos para ingresar y mostrar
// los datos de los libros
void Alumno::ingresarDatosAl() {
    cout << "\n====== Ingresar datos de Alumno ======\n";
    cout << "\tID del Alumno: "; cin.ignore(); cin >> this->idAlumno;
    // Hacemos el llamado al metodo ingresarDatosPersona() de la clase base
    // Persona, al ser un metodo public puede ser accedido desde la clase derivada
    ingresarDatosPersona();
    cout << "\tNombre: "; cin.ignore(); std::getline(cin, this->nombre);
    cout << "\tApellido: "; cin.ignore(); std::getline(cin, this->apellido);
    cout << "\tCodigo: "; cin.ignore(); cin >> this->codigo;
    Alumno::setContadorAlumnos();
    cout << endl;
}
void Alumno::mostrarDatosAl() {
    cout << "\n========= Datos Alumno =========\n";
    cout << "\tID del alumno: " << this->idAlumno << endl;
    // Hacemos el llamado al metodo mostrarDatosPersona() de la clase base
    // Persona, al ser un metodo public puede ser accedido desde la clase derivada
    mostrarDatosPersona();
    cout << "\tNombre: " << this->nombre << endl;
    cout << "\tApellido: " << this->apellido << endl;
    cout << "\tCodigo: " << this->codigo << endl;
    cout << "\tNum alumno en el sistema: " << Alumno::getContadorAlumnos() << endl << endl;
}
// Fin del archivo Alumnos.cpp
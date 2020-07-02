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

// Definición de los metodos ingresa() y mostrar(), mismos de la clase
// base persona
void Alumno::ingresar() {
    cout << "\n====== Ingresar datos de Alumno ======\n";
    cout << "\tID del Alumno: "; cin.ignore(); cin >> this->idAlumno;
    // Invocamos al método ingresar() da la clase base Persona con la intención
    // de aplicar refinamiento
    Persona::ingresar();
    cout << "\tNombre: "; cin.ignore(); std::getline(cin, this->nombre);
    cout << "\tApellido: "; cin.ignore(); std::getline(cin, this->apellido);
    cout << "\tCodigo: "; cin.ignore(); cin >> this->codigo;
    Alumno::setContadorAlumnos();
    cout << endl;
}
void Alumno::mostrar() {
    cout << "\n========= Datos Alumno =========\n";
    cout << "\tID del alumno: " << this->idAlumno << endl;
    // Invocamos al método mostrar() da la clase base Persona con la intención
    // de aplicar refinamiento
    Persona::mostrar();
    cout << "\tNombre: " << this->nombre << endl;
    cout << "\tApellido: " << this->apellido << endl;
    cout << "\tCodigo: " << this->codigo << endl;
    cout << "\tNum alumno en el sistema: " << Alumno::getContadorAlumnos() << endl << endl;
}

/*
// Definicion de los metodos virtuales de la clase base Personas en la clase derivada
// alumno
void Alumno::ingresarDatosPersona() {
    cout << "\n\t(P)DNI: "; cin.ignore(); std::getline(cin, this->dni);
    cout << "\t(P)Edad: "; cin.ignore(); std::getline(cin, this->edad);
    cout << "\t(P)Estado civil: "; cin.ignore(); std::getline(cin, this->eCivil);
}

void Alumno::mostrarDatosPersona() {
    cout << "\n\t(P)DNI: " << this->dni << endl;
    cout << "\t(P)Edad: " << this->edad << endl;
    cout << "\t(P)Estado civil: " << this->eCivil << endl;
}
*/
// Fin del archivo Alumnos.cpp
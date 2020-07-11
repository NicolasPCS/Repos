/////////////////////////////////////////////////////////////////////////////////
// Código   	: aIntercambio.cpp
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Definicion de la clase alumnoIntercambio
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "string"
#include "aIntercambio.h"
using namespace std;

void alumnoIntercambio::ingresar()
{
    cout << "\n====== Ingresar datos de Alumno Intercambio======\n";
    cout << "\tNombre: "; cin.ignore(); cin.ignore(); std::getline(cin, this->nombre);
    cout << "\tApellido: "; cin.ignore(); cin.ignore(); std::getline(cin, this->apellido);
    cout << "\Pais: "; cin.ignore(); cin.ignore(); std::getline(cin, this->pais);
    cout << endl;
}

void alumnoIntercambio::mostrar()
{
    cout << "\n========= Datos Alumno =========\n";
    cout << "\tNombre: " << this->nombre << endl;
    cout << "\tApellido: " << this->apellido << endl;
    cout << "\tPais: " << this->pais << endl << endl;
}

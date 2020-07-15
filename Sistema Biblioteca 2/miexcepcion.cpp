/////////////////////////////////////////////////////////////////////////////////
// Código   	: Fecha.cpp
// Autor		: Nicolas
// Fecha		: 15/07/2020
// Descripción	: Definicion de metodos de clase GestionExcepciones
/////////////////////////////////////////////////////////////////////////////////
#include "miexcepcion.h"
#include <iostream>
using namespace std;

const char* GestionExcepciones::what() const throw()
{
    return "\n\tMi excepci\242n sucedi\242";
}
const char* GestionExcepciones::what1() const throw()
{
    return "\tMi excepci\242n sucedi\242\n";
}
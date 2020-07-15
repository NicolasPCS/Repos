/////////////////////////////////////////////////////////////////////////////////
// Código   	: miexcepcion.h
// Autor		: Nicolas
// Fecha		: 15/07/2020
// Descripción	: Declaracion de la clase GestionExcepciones
//              hereda de la clase exception
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <exception>
using namespace std;

class GestionExcepciones : public exception {
public:
    virtual const char* what() const throw();
    virtual const char* what1() const throw();
};




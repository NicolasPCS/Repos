////////////////////////////////////////////////////////////////////////////////////
// Codigo		: centero.h
// Autor		: Nicolas
// Fecha		: 07/07/2020
// DEscripcion	: clase CEntero abstrae las operaciones de suma y resta
////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "cnumero.h"

class CEntero : public CNumero
{
public:
	CEntero();
	CEntero(int);
	// la nueva función debe coincidir exactamente en número y tipo con
	// los parámetros de la declaración inicial (la "firma" -Signature- 
	// de ambas funciones deben ser iguales). Si no coinciden en esto, 
	// el compilador C++ considera que se trata de funciones diferentes 
	// (un caso de sobrecarga) y se ignora el mecanismo de funciones virtuales.
	CEntero* sumar(CEntero*, CEntero*);
	CEntero* restar(CEntero*, CEntero*);
	CEntero* sumar(double A, double B);
	void escribir();
	friend ostream& operator << (ostream&, CEntero&);

	// Sobrecarga de operadores + y -
	CEntero& operator+(CEntero&);
	CEntero& operator-(CEntero&);

private:
	int valor;
};
////////////////////////////fin del archivo ////////////////////////////////////////

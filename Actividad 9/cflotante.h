/////////////////////////////////////////////////////////////////////////////////////
// Codigo			: cflotante.h
// Autor			:
// Fecha			: 06/06/2020
// DEscripcion	: clase CFlotante abstrae las operaciones de suma y resta
/////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
using namespace std;
#include "cnumero.h"

class CFlotante
	: public CNumero
{
public:
	CFlotante();
	CFlotante(float);
	// la nueva función debe coincidir exactamente en número y tipo con
	// los parámetros de la declaración inicial (la "firma" -Signature- 
	// de ambas funciones deben ser iguales). Si no coinciden en esto, 
	// el compilador C++ considera que se trata de funciones diferentes 
	// (un caso de sobrecarga) y se ignora el mecanismo de funciones virtuales.
	CFlotante* sumar(CFlotante*, CFlotante*);
	CFlotante* restar(CFlotante*, CFlotante*);
	CFlotante* sumar(double A, double B);
	friend ostream& operator <<(ostream&, CFlotante&);
	void escribir();

	// Sobrecarga de operadores + y -
	CFlotante& operator+(CFlotante&);
	CFlotante& operator-(CFlotante&);

private:
	float valor;
};
////////////////////////////fin del archivo /////////////////////////////////////////

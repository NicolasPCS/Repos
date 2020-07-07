/////////////////////////////////////////////////////////////////////////////////////
// Codigo			: cnumero.h
// Autor			:
// Fecha			: 06/06/2020
// DEscripcion	: clase CNumero abstrae las operaciones de suma y resta
/////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>
using namespace std;

class CNumero
{
public:
	CNumero();
	CNumero(double);
	virtual CNumero* sumar(CNumero*, CNumero*);
	virtual CNumero* restar(CNumero*, CNumero*);
	// si hay reemplazo por que la firma de función es igual
	virtual CNumero* sumar(double A, double B);
	virtual void escribir();
	void setValor(double v);
	friend ostream& operator << (ostream&, CNumero&);
	double getValor();

	// Sobrecarga de operadores + y -
	CNumero& operator+(CNumero&);
	CNumero& operator-(CNumero&);

private:
	double valor;
};
////////////////////////////fin del archivo /////////////////////////////////////////

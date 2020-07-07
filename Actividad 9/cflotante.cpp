/////////////////////////////////////////////////////////////////////////////////////
// Codigo			: cflotante.cpp
// Autor			:
// Fecha			: 06/06/2020
// DEscripcion	: definición de métodos de la clase CFlotante que abstrae las operaciones de suma y resta
/////////////////////////////////////////////////////////////////////////////////////
#include "cflotante.h"
#include <iostream>
using namespace std;
CFlotante::CFlotante()
{
	valor = 0;
}
CFlotante::CFlotante(float numero)
{
	valor = numero;
}
CFlotante* CFlotante::sumar(CFlotante* A, CFlotante* B)
{
	this->valor = A->valor + B->valor;
	return (this);
}
CFlotante* CFlotante::sumar(double A, double B)
{
	this->valor = A + B;
	return (this);
}

CFlotante* CFlotante::restar(CFlotante* A, CFlotante* B)
{
	this->valor = A->valor - B->valor;
	return this;
}
/*
void CFlotante::escribir()
{
	cout << "Flotante: " << valor << endl;
}
*/
void CFlotante::escribir()
{
	// refinamiento
	CNumero::escribir(); // llamada al método de la clase base
	cout << "Flotante: " << valor << endl;
}
ostream& operator << (ostream& s, CFlotante& obj)
{
	s << obj.valor << endl;
	return s;
}

CFlotante& CFlotante::operator+(CFlotante& obj)
{
	this->valor = this->valor + obj.valor;
	return *this;
}

CFlotante& CFlotante::operator-(CFlotante& obj)
{
	this->valor = this->valor - obj.valor;
	return *this;
}
////////////////////////////fin del archivo /////////////////////////////////////////

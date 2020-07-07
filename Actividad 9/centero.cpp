////////////////////////////////////////////////////////////////////////////////////
// Codigo		: centero.cpp
// Autor		:
// Fecha		: 06/06/2020
// DEscripcion	: definición de métodos de la clase CEntero que abstrae las operaciones de suma y resta
////////////////////////////////////////////////////////////////////////////////////
#include "centero.h"
#include <iostream>
using namespace std;

CEntero::CEntero()
{
	valor = 0;
}
CEntero::CEntero(int numero)
{
	valor = numero;
}
CEntero* CEntero::sumar(CEntero* A, CEntero* B)
{
	valor = A->valor + B->valor;
	return this;
}
CEntero* CEntero::restar(CEntero* A, CEntero* B)
{
	this->valor = A->valor - B->valor;
	return this;
}
CEntero* CEntero::sumar(double A, double B)
{
	double v = 0;
	v = A + B;
	this->setValor(v);
	return this;
}
void CEntero::escribir()
{
	// reemplazo
	cout << "Numero: " << getValor() << endl;
	cout << "Entero: " << valor << endl;
}


CEntero& CEntero::operator+(CEntero& obj)
{
	this->valor = this->valor + obj.valor;
	return *this;
}

CEntero& CEntero::operator-(CEntero& obj)
{
	this->valor = this->valor - obj.valor;
	return *this;
}

ostream& operator << (ostream& s, CEntero& obj)
{
	s << obj.valor << endl;
	return s;
}
////////////////////////////fin del archivo ////////////////////////////////////////

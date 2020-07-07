/////////////////////////////////////////////////////////////////////////////////////
// Codigo			: cnumero.cpp
// Autor			:
// Fecha			: 06/06/2020
// DEscripcion		: definición de métodos de la clase CNumero que abstrae las operaciones de suma y resta
/////////////////////////////////////////////////////////////////////////////////////
#include "cnumero.h"
#include <iostream>
using namespace std;
CNumero::CNumero()
{
	valor = 0;
}
CNumero::CNumero(double numero)
{
	valor = numero;
}
CNumero* CNumero::sumar(CNumero* A, CNumero* B)
{
	valor = A->valor + B->valor;
	return this;
}
CNumero* CNumero::sumar(double A, double B)
{
	valor = A + B;
	return this;
}

CNumero* CNumero::restar(CNumero* A, CNumero* B)
{
	valor = A->valor - B->valor;
	return this;
}
void CNumero::escribir()
{
	cout << "numero: " << valor << endl;
}
void CNumero::setValor(double v)
{
	valor = v;
}
double CNumero::getValor()
{
	return valor;
}

CNumero& CNumero::operator+(CNumero& obj)
{
	this->valor = this->valor + obj.valor;
	return *this;
}

CNumero& CNumero::operator-(CNumero& obj)
{
	this->valor = this->valor - obj.valor;
	return *this;
}

ostream& operator << (ostream& s, CNumero& obj)
{
	s << obj.valor << endl;
	return s;
}
////////////////////////////fin del archivo /////////////////////////////////////////

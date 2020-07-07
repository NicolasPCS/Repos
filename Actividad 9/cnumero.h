/////////////////////////////////////////////////////////////////////////////////////
// Codigo			: cnumero.h
// Autor			: Nicolás
// Fecha			: 07/07/2020
// DEscripcion		: clase CNumero abstrae las operaciones de suma y resta
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

	// Definición de plantillas de metodos sumar() y restar() en clase base CNumero para
	// valores númericos de cualquier tipo
	// Nota: estos métodos se heredan en las clases derivadas CEntero y CFlotante
	template  <class U> U suma(U& o1, U& o2) {
		U resultado;
		resultado = (o1 + o2);
		cout << resultado << endl;
		return resultado;
	}
	template  <class T> T resta(T& o1, T& o2) {
		T resultado;
		resultado = (o1 - o2);
		cout << resultado << endl;
		return resultado;
	}

	// Sobrecarga de operadores + y -
	CNumero& operator+(CNumero&);
	CNumero& operator-(CNumero&);

private:
	double valor;
};
////////////////////////////fin del archivo /////////////////////////////////////////



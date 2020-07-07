////////////////////////////////////////////////////////////////////////////////////
// Codigo		: centero.h
// Autor		: Nicolás
// Fecha		: 07/07/2020
// DEscripcion	: Programa principal
////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Header.h"
#include "centero.h"
#include "cflotante.h"
#include "cnumero.h"
using namespace std;

int main() {
	CNumero obj(2.22222), obj2(4.34567);
	CNumero& ref = obj, & ref2 = obj2;
	CNumero o1 = suma(ref, ref2);

	cout << o1 << endl;

	CNumero obj3(2.234567), obj4(4.23456);
	CNumero& ref3 = obj3, & ref4 = obj4;
	CNumero o2 = resta(ref3, ref4);

	cout << o2 << endl;

	CEntero ob1(5), ob2(6);
	CEntero& r1 = ob1, & r2 = ob2;
	CEntero a3 = suma(r1, r2);

	cout << a3 << endl;

	CEntero obje3(6), obje4(8);
	CEntero& r3 = obje3, & r4 = obje4;
	CEntero objeto4 = resta(r3, r4);

	cout << objeto4 << endl;

	CFlotante z(5.4), z2(6.4);
	CFlotante& q = z, & q2 = z2;
	CFlotante p = suma(q, q2);

	cout << p << endl;

	CFlotante z3(6.85), z4(8.34);
	CFlotante& q3 = z3, & q4 = z4;
	CFlotante j = resta(q3, q4);

	cout << j << endl;

	return 0;
}





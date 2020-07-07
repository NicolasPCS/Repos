////////////////////////////////////////////////////////////////////////////////////
// Codigo		: centero.h
// Autor		: Nicolás
// Fecha		: 07/07/2020
// DEscripcion	: Programa principal
////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "centero.h"
#include "cflotante.h"
#include "cnumero.h"
using namespace std;

int main() {
	// Creación de objetos de la clase blase CNumero
	CNumero obj(2.22222), obj2(4.34567);
	CNumero& ref = obj, & ref2 = obj2;
	// Llamado al método suma() de clase base
	CNumero o1; o1.suma(ref, ref2);

	// Creación de objetos de la clase blase CNumero
	CNumero obj3(2.234567), obj4(4.23456);
	CNumero& ref3 = obj3, & ref4 = obj4;
	// Llamado al método resta() de clase base
	CNumero o2; o2.resta(ref3, ref4);

	// Creación de objetos de la clase blase CEntero
	CEntero ob1(5), ob2(6);
	CEntero& r1 = ob1, & r2 = ob2;
	// Llamado al método suma() de clase base
	CEntero a3; a3.suma(r1, r2);

	// Creación de objetos de la clase blase CEntero
	CEntero obje3(6), obje4(8);
	CEntero& r3 = obje3, & r4 = obje4;
	// Llamado al método resta() de clase base
	CEntero objeto4; objeto4.resta(r3, r4);

	// Creación de objetos de la clase blase CFlotante
	CFlotante z(5.4), z2(6.4);
	CFlotante& q = z, & q2 = z2;
	// Llamado al método suma() de clase base
	CFlotante p; p.suma(q, q2);

	// Creación de objetos de la clase blase CFlotante
	CFlotante z3(6.85), z4(8.34);
	CFlotante& q3 = z3, & q4 = z4;
	// Llamado al método resta() de clase base
	CFlotante j; j.resta(q3, q4);

	return 0;
}





/////////////////////////////////////////////////////////////////////////////////
// Código   	: Fecha.h
// Autor		: Nicolas
// Fecha		: 10/07/2020
// Descripción	: Declaracion del template de clase Fecha
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
using namespace std;

// Creamos un template de clase Fecha, con el identificador F
template <class F>
class Fecha {
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha() = default;
	~Fecha() = default;
	// creamos la sobrecarga de operadores de salida y entrada
	// para el template de Fecha
	// NOTA: se crea la declaración y definición de las sobrecargas, en el
	// archivo .h, puesto que si se crea externamente el compilador
	// genera errores
	friend ostream& operator <<(ostream& s, Fecha<F>& obj) {
		s << "\n\ttDatos de Nacimiento:" << endl;
		s << "\tDia: " << obj.dia << endl;
		s << "\tMes: " << obj.mes << endl;
		s << "\tAnio: " << obj.anio << endl << endl;
		return s;
	}
	friend istream& operator >>(istream& e, Fecha<F>& obj) {
		cout << "\n\tDatos de Nacimiento: " << endl;
		cout << "\tDia: "; e >> obj.dia;
		cout << "\tMes: "; e >> obj.mes;
		cout << "\tAnio: "; e >> obj.anio;
		cout << endl;
		return e;
	}
};
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

	friend ostream& operator <<<F>(ostream& s, Fecha<F>& obj) 
	{
		s << "\nDia: " << obj.dia;
		s << "\nMes: " << obj.mes;
		s << "\nAnio: " << obj.anio;
		return s;
	}
	friend istream& operator >><F>(istream& e, Fecha<F>& obj) 
	{
		cout << "Dia: "; e >> obj.dia;
		cout << "Mes: "; e >> obj.mes;
		cout << "Anio: "; e >> obj.anio;
		return e;
	}
};


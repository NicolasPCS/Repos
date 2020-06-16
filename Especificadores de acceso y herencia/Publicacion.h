#pragma once
#include <iostream>
using namespace std;
class Publicacion {
private:
	string revista;
protected:
	string isbn;
public:
	Publicacion(string revista, string isbn);
	friend void ingresar();
	void mostrar();
	static int contador;
};

int Publicacion::contador = 0;
Publicacion::Publicacion(string revista, string isbn) {
	this->revista = revista;
	this->isbn = isbn;
}
void ingresar() {
	cout << "Revista: "; cin >> Publicacion::revista;
	cout << "ISBN: "; cin >> Publicacion::isbn;
	Publicacion::contador++;
}
void Publicacion::mostrar() {
	cout << "Revista: " << revista << endl;
	cout << "ISBN: " << isbn << endl;
}





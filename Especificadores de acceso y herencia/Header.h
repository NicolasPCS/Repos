#pragma once
#include <iostream>
using namespace std;
class Persona {
private:
	string dni;
protected:
	string nombre;
	string edad;
public:
	// este constructor lo creamos porque la clase base no puede heredar lo privado
	Persona(string dni, string nombre, int edad) {
		this->dni = dni;
		this->nombre = nombre;
		this->edad = edad;
	}
	void ingresar() {
		cout << "DNI: "; cin >> dni;
		cout << "Nombre: "; cin >> nombre;
		cout << "Edad: "; cin >> edad;
	}
	void mostrar() {
		cout << "DNI: " << dni << endl;
		cout << "Nombre: " << nombre << endl;
		cout << "Edad: " << edad << endl;
	}
};

class Alumno : public Persona {
private:
	string codigo;
protected:
	int nCursos;
public:
	Alumno(string dni, string nombre, int edad, string codigo, int nCursos) : Persona(dni, nombre, edad) {
		this->codigo = codigo;
		this->nCursos = nCursos;
	}
	void ingresarA() {
		ingresar();
		cout << "Codigo: "; cin >> codigo;
		cout << "Numero cursos: "; cin >> nCursos;
	}
	void mostrarA() {
		mostrar();
		cout << "Codigo: " << codigo << endl;
		cout << "Numero cursos: " << nCursos << endl;
	}
};

class alumnoIntercambio : protected Alumno {
private:
	string pais;
public:
	alumnoIntercambio(string dni, string nombre, int edad, string codigo, int nCursos, string pais) : Alumno(dni, nombre, edad, codigo, nCursos) {
		this->pais = pais;
	}
	void ingresarAI() {
		ingresarA();
		cout << "Pais: "; cin >> pais;
	}
	void mostrarAI() {
		mostrarA();
		cout << "Pais: " << pais;
	}
};
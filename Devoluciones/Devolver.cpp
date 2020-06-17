#include "Devolver.h"
/////////////////////////////
/////////devolver.cpp////////
/////////////////////////////

#include<iostream>
#include<string.h>
#include <Windows.h>
#pragma warning(disable : 4996)

using namespace std;

void devolucion::ingresarDatos() {
	cout << "Ingrese el carnet" << endl;
	cin >> codigoCarnet;
	cout << endl;
}
void devolucion::verificarEstado() {
	if (estado == 1) {
		cout << "El libro se a devuelto, ahora se encuentra disponible" << endl << endl;
		estado = 0;
	}
	else {
		cout << "El libro no fue prestado" << endl;
	}
}
void devolucion::horaEntrega() {

	cout << "El libro fue entregado el dia : " << endl;
	fechaOrdenador();
	cout << "Fue entregado a las : " << endl;
	horaOrdenador();

	cout << "Por el carnet : " << codigoCarnet << endl;

}
//////////////////////////////////////////////////////////////////////
////////////////////////// CODIGO PARA FECHA /////////////////////////
//////////////////////////////////////////////////////////////////////
void devolucion::inicializar()
{
	dia = 0;
	mes = 0;
	annio = 0;
}
void devolucion::ingreso()
{
	cout << "Ingresar dia\t: ";
	cin >> dia;
	cout << "Ingresar mes\t: ";
	cin >> mes;
	cout << "Ingresar annio	: ";
	cin >> annio;

}
void devolucion::mostrar()
{
	cout << dia << "/" << mes << "/" << annio << endl;
}
void devolucion::formatoFecha()
{
	cout << "Fecha USA: " << mes << "/" << dia << "/" << annio << endl;
}
void devolucion::mostraFechatexto()
{
	cout << fechaTexto << endl;
}
void devolucion::setDia(int dia)
{
	devolucion::dia = 0;
	this->dia = dia;
}
int devolucion::getDia() { return dia; }
void devolucion::setMes(int m) { mes = m; }
int devolucion::getMes() { return mes; }

int devolucion::fechaOrdenador() {
	int day, mon, year;
	time_t t = time(0); // get time now 
	struct tm* now = localtime(&t);

	cout << (now->tm_mday) << '-' << (now->tm_mon + 1) << '-' << (now->tm_year + 1900) << endl;
	mon = now->tm_mon + 1;
	day = now->tm_mday;
	year = now->tm_year + 1900;
	return 0;
}
int devolucion::horaOrdenador() {

	time_t tiempo = time(0);
	struct tm* hora = localtime(&tiempo);
	char output[50];
	strftime(output, 50, "%H:%M:%S", hora);

	printf("%s\n", output);
	return 0;
}
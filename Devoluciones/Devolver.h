/////////////////////////////
//////////devolver.h/////////
/////////////////////////////
#pragma once
#include <ctime>
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;
class devolucion {
private:
	int dia;
	int mes;
	int annio;
	string fechaTexto;

	/////////devolucion//////////

	int codigoCarnet;
	string titulo;
	int codigo;
	bool estado = 1; //1=Presatado

public:
	/////////////////////////////
	////////CODIGO FECHA/////////
	/////////////////////////////

		//fecha(int, int, int);
	void setDia(int dia);
	int getDia();
	void setMes(int m);
	int getMes();

	void inicializar();
	void ingreso();
	void mostrar();
	void formatoFecha();
	void mostraFechatexto();

	/////////////////////////////
	///////CODIGO DEVOLVER///////
	/////////////////////////////

	void horaEntrega();
	void ingresarDatos();
	void verificarEstado();

	int horaOrdenador();
	int fechaOrdenador();

};
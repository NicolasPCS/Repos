////////////////////////////////////////////////////////////////////////////////////
// Codigo		: Header.h
// Autor		: Nicol�s
// Fecha		: 07/07/2020
// DEscripcion	: Definici�n y declaraci�n de las plantillas suma y resta
////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
using namespace std;

template  <class U> U suma(U& o1, U& o2) 
{
	U resultado;
	resultado = (o1 + o2);
	return resultado;
}

template  <class T> T resta(T& o1, T& o2)
{
	T resultado;
	resultado = (o1 - o2);
	return resultado;
}
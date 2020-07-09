#include "Conjunto.h"
#include <iostream>
using namespace std;
template < class T>
Conjunto<T>::Conjunto()
{
	int n = 0;
	cout << "Ingrese numero de elementos: ";
	cin >> n;
	elementos = new T[n];
}
template < class T>
void Conjunto<T>::agregar(T& elemento)
{
	elementos[nroElementos++] = elemento;
}

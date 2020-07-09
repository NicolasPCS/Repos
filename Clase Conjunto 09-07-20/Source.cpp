#include "Conjunto.h"
using namespace std;

int main() {
	char var = 'a', & refa = var;
	int var1 = 1, & ref1 = var1;

	Conjunto<double> arregloPlantilla[3];
	Conjunto<char> letras;
	Conjunto<int> enteros;
	letras.agregar(refa);
	cout << letras;
}
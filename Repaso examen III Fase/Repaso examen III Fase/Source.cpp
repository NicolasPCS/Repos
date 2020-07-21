#include <iostream>
#include "Persona.h"
#include "Docente.h"
#include "Estudiante.h"
#include "alumnoIntercambio.h"
#include "GestionExcepciones.h"

using namespace std;
void menu();

int main() {
	// Creamos un objeto "myex" de la clase MiExcepcion
	GestionExcepciones myex;

	// Declaracion de variables a utilizar
	int opc = 0;
	int nroAls = 0;
	int const nroDoc = 2;

	cout << "El numero de docentes en esta universidad es: " << nroDoc << endl;

	do {
		try {
			cout << "Ingrese el numero de alumnos en esta universidad: "; cin >> nroAls;
			if (nroAls < 0) {
				throw(exception)myex;
			}
			else {
				goto salto;
			}
		}
		catch (exception& e){
			cout << e.what() << '\n';
			cout << "MiExcepcion: el valor debe ser mayor a 1" << endl << endl;
		}
	} while (nroAls < 0);
	salto:

	// Array dinamico de la clase Estudiante
	Estudiante* estudiantes = new Estudiante[nroAls];

	// Array estatico de la clase Docente
	Docente docente[nroDoc] = {};

	do {
		cout << "==============================================" << endl;
		menu();

		try {
			cout << ">>>>>>>>>>>>>>Ingrese una opcion: "; cin >> opc;
			if (opc < 0) {
				throw (exception)myex;
			}
			else if (opc > 5) {
				throw (GestionExcepciones)myex;
			}
			else {
				switch (opc) {
				case 1:
					for (int i = 0; i < nroAls; i++)
						// estudiantes[i].ingresar(); // Metodo de clase base Persona



						estudiantes[i].ingresar(); // Metodo de clase Estudiante
					break;
				case 2:
					for (int i = 0; i < nroAls; i++)
						estudiantes[i].mostrar();
					break;
				case 3:
					for (int i = 0; i < nroDoc; i++)
						docente[i].ingresar();
					break;
				case 4:
					for (int i = 0; i < nroDoc; i++)
						docente[i].mostrar();
					break;
				case 5:
					cout << "Saliendo..." << endl << endl;
					break;
				default:
					cout << "Ingrese una opcion correcta" << endl;
					break;
				}
			}
		}
		catch (exception& e) {
			cout << e.what() << '\n';
			cout << "MiExcepcion: El valor debe ser mayor o igual a 1" << endl << endl;
		}
		catch (GestionExcepciones& e) {
			cout << e.what1() << '\n';
			cout << "MiExcepcion: El valor debe ser menor o igual a 5" << endl << endl;
		}

	} while (opc != 5);

	system("pause");
	return 0;
}

void menu() {
	cout	<< "\n\t[1] Ingresar datos alukno"
			<< "\n\t[2] Mostrar datos alumno"
			<< "\n\t[3] Ingresar datos docente"
			<< "\n\t[4] Mostrar datos docente"
			<< "\n\t[5] Salir" << endl;
}
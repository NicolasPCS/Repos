#include <iostream>
using namespace std;

// PRIMER NIVEL
class Vehiculo {
public:
	//metodo virtual de Vehiculo
	virtual void abordar() { cout << "Sube al vehiculo" << endl; }
	//metodo normal de vehiculo
	void arrancar() { cout << "Encender motor y liberar freno" << endl; }
};

// SEGUNDO NIVEL
class VehiculoAereo : public Vehiculo {};
class VehiculoTerrestre : public Vehiculo {};
class VehiculoAcuatico : public Vehiculo {};

// TERCER NIVEL
class VehiculoTerrestreCarga : public VehiculoTerrestre {};
class VehiculoTerrestrePasajeros : public VehiculoTerrestre {};
class VehiculoAcuaticoRecreo : public VehiculoAcuatico {};

// CUARTO NIVEL
class Camion : public VehiculoTerrestreCarga {
	//Metodo virtual implementado
	void abordar() { cout << "Subir carga a camion" << endl; }
	void arrancar() { cout << "Encender motor, se pone primera, se direcciona timón y liberar freno" << endl; }
};

class Furgoneta : public VehiculoTerrestreCarga {
	//Metodo virtual implementado
	void abordar() { cout << "Almacenar mercancías a la furgoneta" << endl; }
	void arrancar() { cout << "Mover palanca de cambios a 'Neutro', se enciende el motor, se dirreciona el timón y se libera el freno de mano" << endl; }
};

// Dos clases derivadas del tercer nivel, clase VehiculoTerrestrePasajeros
class Bus : public VehiculoTerrestrePasajeros {
	//Metodo virtual implementado
	void abordar() { cout << "Subir a bus y tomar asiento" << endl; }
	void arrancar() { cout << "Encender interruptor de alimentación principal, se mueve la palanca de cambios a 'Neutro', se enciende el motor, se dirreciona el timón y se libera el freno de mano" << endl; }
};

class Combi : public VehiculoTerrestrePasajeros {
	void abordar() { cout << "Subir a combi y, tomar asiento o quedarse parado" << endl; }
	void arrancar() { cout << "Mover la palanca de cambios a 'Neutro', se enciende el motor, se dirreciona el timón y se libera el freno de mano" << endl; }
};

// Dos clases derivadas del tercer nivel, clase VehiculoAcuaticoRecreo
class Yate : public VehiculoAcuaticoRecreo {
	//Metodo virtual implementado
	void abordar() { cout << "Subir al yate y ponerse bloqueador" << endl; }
	void arrancar() { cout << "Otorgar fluido eléctrico al yate, se enciende los motores, se mantiene la palanca de mando en 'Neutro' y bajan los motores al agua" << endl; }
};

class MotoAcuatica : public VehiculoAcuaticoRecreo {
	void abordar() { cout << "Subir a la moto acuática, ponerse bloqueador y encontrar una posición cómoda para sentarse" << endl; }
	void arrancar() { cout << "Colocar una llave particular en una cerradura, se enciende el motor y se presiona el acelerador" << endl; }
};

#include <iostream>
#include <string>
using namespace std;
//declaracion de funcion arrancarV
void arrancarV(Vehiculo* v);
int main() {
	int n = 0, m = 0;
	cout << "ingresar opc de vehiculo: ";
	cin >> n;
	Vehiculo** Vehiculos2 = new Vehiculo * [n];
	//5.b Crear un bloque de código con una rutina para agregar
	//las direcciones de objetos de las clases del programa que hemos modelado.
	/*for (int i = 0; i < n; i++) {
		arrancarV(Vehiculos2[i]);
		break;
	}*/

	for (int i = 0; i < n; i++)
	{
		string nombre;
		cout << "ingresar vehiculo: "; cin >> m;
		cout << "Ingrese nombre: "; cin.ignore(); getline(cin, nombre);
		switch (m)
		{
			// alojar objetos de clases derivadas en el arreglo de punteros de clase base
		case 1: Vehiculos2[i] = new Camion; break;
		case 2: Vehiculos2[i] = new Furgoneta; break;
		case 3: Vehiculos2[i] = new Bus; break;
		case 4: Vehiculos2[i] = new Yate; break;
		case 5: Vehiculos2[i] = new MotoAcuatica; break;
		case 6: Vehiculos2[i] = new Combi; break;
		}
	}

	cout << "Vehiculos: " << endl;
	for (int i = 0; i < n; i++)
	{
		// 5. c) ejecutar polimorficamente los métodos con virtual en el arreglo de objetos
		Vehiculos2[i]->arrancar();
		Vehiculos2[i]->abordar();
	}


	system("pause");
	return 0;
}
//desarrollo de funcion arrancarV
void arrancarV(Vehiculo* v) {

	v->arrancar();
} //Fin de funcion arrancarV
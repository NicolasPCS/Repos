#include <iostream>
using namespace std;

// Primer nivel
class Vehiculo {
public:
	//metodo virtual de Vehiculo
	virtual void abordar() { cout << "Sube al vehiculo"; }
	//metodo normal de vehiculo
	void arrancar() { cout << "Encender motor y liberar freno"; }
};

// Segundo nivel
class VehiculoAereo : public Vehiculo {
	//Metodo virtual implementado
	void abordar() { cout << "Subir a vehiculo Aereo"; }
};

class VehiculoTerrestre : public Vehiculo {

	//Metodo virtual implementado
	void abordar() { cout << "Subir a vehiculo Terrestre"; }
};

class VehiculoAcuatico : public Vehiculo {
	//Metodo virtual implementado
	void abordar() { cout << "Subir a vehiculo Acuatico"; }
	//Metodo normal propio de clase VehiculoAcuatico
	//ahmm si igual lo va heredar... solo que la invocacion podemos usar el metodo heredado como
	//tamnien el propio metodo de esta class derivada dependea q metodo se llame...sip
	//ahmm nose que dicen? creo que si se pone o no igual el metodo arrancar no nos da polimorfismo 
	//ayaappp osea el metodo normal de vehiculo no tonces?... ahh en ese caso esta bien haha borremos arrancar en ese casso 
	//Sip, 
	//ahh si? que mas escuchaste?? yaya
	
	// solo eso pude escuchar.... :v
	// si...un vehículo acuatico y 2 vehiculos aereos
	// me acuerdo que debemos agregar clases 3 clases más en el tercer nivel y posteriormente 3 clases que deriven de estas.
	// escuche del inge. que el segundo nivel no se implementa metodos, que solo sirve de herencia, algo asi
};

// Tercer nivel
class VehiculoTerrestreCarga : public VehiculoTerrestre {
	//Metodo virtual implementado
	void abordar() { cout << "Subir carga a vehiculo Terrestre Carga"; }
};

class VehiculoTerrestrePasajeros : public VehiculoTerrestre {
	//Metodo virtual implementado
	void abordar() { cout << "Subir pasajeros a vehiculo Terrestre y tomar asientos"; }
};

class VehiculoAcuaticoRecreo : public VehiculoAcuatico {
	//Metodo virtual implementado
	void abordar() { cout << "Subir pasajeros a vehiculo Acutico Recreacional y tomar asientos"; }
};

// Cuarto nivel
class Camion : public VehiculoTerrestreCarga {
	//Metodo virtual implementado
	void abordar() { cout << "Subir carga a camion"; }
};

class Bus : public VehiculoTerrestrePasajeros {
	//Metodo virtual implementado
	void abordar() { cout << "Subir a bus y tomar asientos"; }
};
//aqui va aver arrancar?
class Yate : public VehiculoAcuaticoRecreo {
	//Metodo virtual implementado
	void abordar() { "Subir al yate y ponerse bloqueador"; }
};

/////////////////////////////////////////////////////////////////////////////////
// Código   	: Persona.h
// Autor		: Nicolas
// Fecha		: 15/06/2020
// Descripción	: Declaracion de la clase base Persona
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Fecha.h"
#include <iostream>
using namespace std;

class Persona {
protected:
	string dni;
	string edad;
	string eCivil;
	Fecha fecha;
public:
	Persona();

	// Declaramos el destructor de la clase Persona
	// como default
	virtual ~Persona() = default;

	// Declaracion de los metodos virtuales ingresar() y mostrar()
	virtual void ingresar();
	virtual void mostrar();
};









/* funciones virtuales puras
una funcion virtual pura, es aquella que se declara en la clase base, pero que
no se define y que obliga a las clases derivadas a definirla

al no tener definicion, no es posible usar la funcion en la clase base. unicamenten en las clases derivadas,
que es donde se encuentra definida

si una clase tiene al menos una funcion virtual pura, entonces esa clase se dice que es
"abstracta"

una clase abstracta, tiene una caracteristica importante, que no puede tener objetos de esa
clase, pero si apuntadores

una clase abs debe ser usada como una clase base, para otras clases que heredaran
*/

/* interfaces
una interfaz es una clase abstracta que no tiene implementacion y que todos
sus metodos deben ser funcion virtuales puras

las clases derivadas de la interfaz, deben tener implementadas todo los metodos de la
interfaz
*/
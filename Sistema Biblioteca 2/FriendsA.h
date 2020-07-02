/////////////////////////////////////////////////////////////////////////////////
// Código   	: FriendsA.h
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Declaración de las funciones amigas de la clase alumnos
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include <string>
#include "Alumnos.h"
using namespace std;
// Creamos el cuerpo de la funcion amiga, la cual muestra
// los datos de un objeto, la cual a su vez hace llamado
// al metodo mostrarDatosAl(), el cual se encuentra en la
// clase Alumno
// Se observa tambien que la funcion amiga se crea como una
// funcion inline, ello debido a que estas funciones son
// llamadas cuando se haga el llamado a dicha funcion
inline void amigaMostrarDatoAlumnos(Alumno* a, int n) {
    for (int i = 0; i < n; i++) {
        a[i].mostrar();
    }
}
ostream& operator<<(ostream& out, Alumno& alumno) { return out; }
istream& operator>>(istream& in, Alumno& alumno) { return in; }
// Fin del archivo FriendsA.h
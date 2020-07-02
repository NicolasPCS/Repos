/////////////////////////////////////////////////////////////////////////////////
// Código   	: Alumnos.h
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Declaración de la clase derivada Alumno
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "Libros.h"
#include "Persona.h"
#include "string"
using namespace std;
class Libro;
class Alumno : public Persona {
private:
    // Guarda una una referencia a cualquier objeto de Libro
    // No se instancia dentro de edificio
protected:
    string nombre;
    string apellido;
    string codigo;
    // Definimos un atributo estatico
    static int contadorAlumnos;
    Libro* libros;
public:
    int idAlumno;

    // Heredamos el constructor de la clase Persona
    // En clase persona, no inicializamos valores a los atributos
    Alumno() : Persona() {
        idAlumno = 0;
        nombre = " ";
        apellido = " ";
        codigo = " ";
    }

    // Declaramos el destructor de la clase Alumno como default, que 
    // hereda de la clase Persona (NOTA: Al momento de la compilacion
    // primero se ejecuta el destructor de la clase derivada Alumno, y 
    // despues el destructor de la clase base Persona)
    ~Alumno() = default;

    // Declaración de los metodos ingresar y mostrar(), mismos de la
    // clase base Persona
    void ingresar();
    void mostrar();

    // Definimos un metodo estatico getContadorAlumnos
    // el cual solo podra acceder a los atributos
    // estaticos de la clase Alumno
    static int getContadorAlumnos() {
        return contadorAlumnos++;
    }

    // Definimos un metodo estatico setContadorAlumnos
    static void setContadorAlumnos() {
        contadorAlumnos = 1;
    }

    // Definimos una funcion amiga para que muestre los
    // datos de un objeto, el cual a su vez se encuentra
    // en un array de objetos dinamico de la clase Alumno
    friend void amigaMostrarDatoAlumnos(Alumno*, int);

    // En la clase Alumno, especificador de acceso public
    // Definimos la sobrecarga de los operadores
    // de entrada y salida de datos en la clase Alumno
    friend ostream& operator<<(ostream&, Alumno&);
    friend istream& operator>>(istream&, Alumno&);

    // funcion pura redeclarada en la clase derivada Alumno
    // void ingresarDatosPersona();
    // void mostrarDatosPersona();
};
// Fin del archivo Alumno.h
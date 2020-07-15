/////////////////////////////////////////////////////////////////////////////////
// Código   	: Source.cpp
// Autor		: Nicolas
// Fecha		: 03/06/2020
// Descripción	: Programa principal
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstdlib>
#include "Alumnos.h"
#include "Libros.h"
#include "FriendsL.h"
#include "FriendsA.h"
#include "miexcepcion.h"
using namespace std;
void menu();
int Alumno::contadorAlumnos = 0;
int Libro::contadorLibros = 0;
int main() {
    // Creamos un objeto "myex" de la clase MiExcepcion
    GestionExcepciones  myex;

    int opc = 0;
    int nroAls = 0;
    int const nroLibs = 2;
    cout << "------BIENVENIDO AL SISTEMA DE BIBLIOTECA------" << endl;
    cout << "El numero de libros por sesion es de " << nroLibs << " libros";
    
    do {
        try {
            cout << "\nIngrese el numero de alumnos en esta sesion: "; cin >> nroAls;
            if (nroAls < 0) {
                throw(exception)myex;
            }
            else {
                goto salto;
            }
        }
        catch (exception& e)
        {
            cout << e.what() << '\n';
            cout << "\tMiExcepcion: el valor debe ser mayor a 1" << endl << endl;
        }
    } while (nroAls < 0);

    salto:
    // Creamos un array dinamico de la clase Alumno, que almacenara objetos 
    // con los datos de los alumnos ingresados por teclado
    Alumno* alumnos = NULL;
    alumnos = new Alumno[nroAls];
    // Creamos un array estatico de la clase Libro, que almacenara objetos
    // con los datos de los libros ingresados por tecladoingresarDatosAl
    Libro libros[nroLibs] = {};
    do {
        cout << "===============================================" << endl;
        menu();
        
        try {

            cout << "\n>>>>>>>>>Ingrese una opcion: "; cin >> opc;
            if (opc < 0) {
                throw (exception)myex;
            }
            else if (opc > 7) {
                throw (GestionExcepciones)myex;
            }
            else {

                switch (opc) {
                case 1:
                    // Ingresamos los datos para alumnos
                    for (int i = 0; i < nroAls; i++)
                        // Ingresamos datos de alumnos al objeto en el arreglo dinámico, en una
                        // posicion determinada
                        alumnos[i].ingresar();
                    break;
                case 2:
                {
                    // Mostramos los datos para alumnos
                    int idAl = 0;
                    int opcion = 0;
                    cout << "Mostrar datos de todos los estudiantes o solo de uno? (1/2): "; cin >> opcion;
                    if (opcion == 1) {
                        for (int i = 0; i < nroAls; i++)
                            // Mostramos los datos de todos los alumnos en el arreglo dinámico
                            alumnos[i].mostrar();
                    }
                    else if (opcion == 2) {
                        cout << "Ingrese el ID del alumno: "; cin >> idAl;
                        for (int i = 0; i < nroAls; i++)
                            if (idAl == alumnos[i].idAlumno) {
                                // Mostramos datos de alumno que se encuentra almacenado en el
                                // arreglo dinámico, en una posicion determinada
                                alumnos[i].mostrar();
                            }
                    }
                }
                break;
                // En el archivo principal
                case 3:
                    // Ingresamos los datos para libros
                    for (int i = 0; i < nroLibs; i++)
                        // Ingresamos los datos para libros, con el operador sobrecargado de entrada
                        // Dichos datos son almacenados en un arreglo estático
                        cin >> libros[i];
                    break;
                case 4:
                {
                    // Mostramos los datos para libros
                    int codLib = 0;
                    int opcion = 0;
                    cout << "Mostrar datos de todos los libros o solo de uno? (1/2): "; cin >> opcion;
                    if (opcion == 1) {
                        for (int i = 0; i < nroLibs; i++)
                            // Mostramos los datos de todos los objetos almacenados en el arreglo estático
                            // de libros; utilizamos el operador sobrecargado de salida
                            cout << libros[i];
                    }
                    else if (opcion == 2) {
                        cout << "Ingrese el codigo del libro: "; cin >> codLib;
                        for (int i = 0; i < nroLibs; i++) {
                            if (codLib == libros[i].codigo) {
                                // Mostramos los datos del objeto en una posición determinada del arreglo estático
                                // de libros; utilizamos el operador sobrecargado de salida
                                cout << libros[i];
                            }
                        }
                    }
                }
                break;
                case 5:
                {
                    // Realizamos el prestamo de un libro a un estudiante, para ello solo se ingresa el codigo del libro
                    // y el ID del estudiante
                    int codigo = 0;
                    int idAlPres = 0;
                    cout << "\nIngrese el codigo del libro que va a prestar: "; cin >> codigo;
                    cout << "Ingrese el ID del alumno al que se va a prestrar: "; cin >> idAlPres;
                    std::system("cls");
                    cout << "\nAcontinuacion se muestra los datos del libro y estudiante al que se realiza el prestamo" << endl;
                    cout << "/////////////////////////////////////////////////////////////////////////////////////////" << endl;
                    for (int i = 0; i < nroLibs; i++) {
                        if (codigo == libros[i].codigo) {
                            // Hacemos el llamado a la clase amiga de la clase libro
                            // la cual mostrara los datos de todos los objetos del array libros
                            // Le enviamos como parametro el objeto y su posicion en el arreglo
                            amigaMostrarDatoLibros(libros, nroLibs);
                        }
                    }
                    for (int i = 0; i < nroAls; i++) {
                        if (idAlPres == alumnos[i].idAlumno) {
                            // Hacemos el llamado a la clase amiga de la clase alumno
                            // la cual mostrara los datos de un libro en una determinada posicion del array alumno
                            // Le enviamos como parametro el objeto y su posicion en el arreglo
                            amigaMostrarDatoAlumnos(alumnos, nroAls);
                        }
                    }
                    cout << "/////////////////////////////////////////////////////////////////////////////////////////" << endl;
                    break;
                }
                case 6:
                {
                    // Realizamos el prestamo de un libro a un estudiante, para ello solo se ingresa el codigo del libro
                    // y el ID del estudiante
                    int codigo = 0;
                    int idAlPres = 0;
                    cout << "\nIngrese el codigo del libro que va a devolver: "; cin >> codigo;
                    cout << "Ingrese el ID del alumno al que se va a devolver: "; cin >> idAlPres;
                    std::system("cls");
                    cout << "\nAcontinuacion se muestra los datos del libro y estudiante que va a devolver el libro" << endl;
                    cout << "/////////////////////////////////////////////////////////////////////////////////////////" << endl;
                    for (int i = 0; i < nroLibs; i++) {
                        if (codigo == libros[i].codigo) {
                            // Hacemos el llamado a la clase amiga de la clase libro
                            // la cual mostrara los datos de todos los objetos del array libros
                            // Le enviamos como parametro el objeto y su posicion en el arreglo
                            amigaMostrarDatoLibros(libros, nroLibs);
                        }
                    }
                    for (int i = 0; i < nroAls; i++) {
                        if (idAlPres == alumnos[i].idAlumno) {
                            // Hacemos el llamado a la clase amiga de la clase alumno
                            // la cual mostrara los datos de un libro en una determinada posicion del array alumno
                            // Le enviamos como parametro el objeto y su posicion en el arreglo
                            amigaMostrarDatoAlumnos(alumnos, nroAls);
                        }
                    }
                    cout << "/////////////////////////////////////////////////////////////////////////////////////////" << endl;
                    break;
                }
                case 7:
                    cout << "Saliendo del sistema..." << endl << endl;
                    break;
                default:
                    cout << "Ingrese una opcion correcta" << endl;
                    break;
                }

            }

        }
        catch (exception& e)
        {
            cout << e.what() << '\n';
            cout << "\tMiExcepcion: el valor debe ser mayor a 1" << endl << endl;
        }
        catch (GestionExcepciones& e)
        {
            cout << e.what1() << '\n';
            cout << "\tMiExcepcion: el valor debe ser menor o igual a 7" << endl << endl;
        }

    } while (opc != 7);
    std::system("pause");
    return 0;
}

void menu() {
    // Menu de opciones
    cout << "\n\t[1] Ingresar datos de alumnos"
        << "\n\t[2] Mostrar datos de alumnos"
        << "\n\t[3] Ingresar datos de libros"
        << "\n\t[4] Mostrar datos libros"
        << "\n\t[5] Prestar libro"
        << "\n\t[6] Devolver libro"
        << "\n\t[7] Salir" << endl;
}
// Fin del archivo Source.cpp

#include "tCientifico.h"
#include <iostream>
using namespace std;

int main() {
	tCientifico nuevo("Revista iberoamericana", "2345678", "Publicaciones", "6ta edicion",
        "Analisis de..", "Nombre autor");
	nuevo.ingresarA();
	nuevo.mostrarA();
}


#include <iostream>
using namespace std;
class Publicacion {
public: int x;
      friend Publicacion& operator++(Publicacion&);
      friend Publicacion& operator--(Publicacion&);
};
Publicacion& operator++ (Publicacion& e) {
    e.x = e.x + e.x;
    return e;
}
Publicacion& operator-- (Publicacion& e) {
    e.x = e.x / 2;
    return e;
}
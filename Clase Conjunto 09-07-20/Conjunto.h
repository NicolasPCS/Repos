#pragma once
#include <iostream>
using namespace std;

template <class T>
class Conjunto {
public:
    Conjunto();
    void agregar(T& elemento);
    friend std::ostream& operator << <T>(std::ostream& salida, const Conjunto<T>& obj) {
        for (int i = 0; i < obj.nroElementos; i++)
            salida << "elemento[" << i << "]: " << obj.elementos[i] << endl;
        return salida;
    }
private:
    T* elementos;
    int nroElementos;
};




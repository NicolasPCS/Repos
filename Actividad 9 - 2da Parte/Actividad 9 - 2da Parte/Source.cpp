#include <iostream>
using namespace std;

template <class T>
class Conjunto {
private:
	T *elementos;
	int cardinalidad;	
	int nroElementos;
public:
	Conjunto() {
		int n = 0;
		cout << "Ingrese el número de elementos: "; cin >> n;
		elementos = new T[n];
	}
	void agregar(T& elemento) {
		elementos[nroElementos++] = elemento;
	}
	friend ostream& operator << <T>(ostream& salida, const Conjunto<T>& obj) {
		for (int i = 0; i < obj.nroElementos; i++)
			salida << "elemento[" << i << "]: " << obj.elementos[i] << endl;
		return salida;
	}

	friend istream& operator >> <T>(istream& entrada, const Conjunto<T>& obj) {
		for (int i = 0; i < obj.nroElementos; i++)
			entrada >> "elemento[" >> i << "]: " >> obj.elementos[i];
		return entrada;
	}

	bool miembro(T& objeto){
		for(int i=0; i<this->nroElementos;i++)
		{
			if(objeto==this->elementos[i])
				return true;
		}
		return false
	}
};
//concedeme el permiso no puedo ejecutar nada ......Nada me sale no nada
// ya esta
// el cuerpo de los metodos los desarrollamos dentros de la clase ---- Ok.
// prueben ejecutando el codigo, a mi me salia error en la sobvrecarga
// nada? no me sale nada solo que no se puede compilar proyecto no encontrado 
// cuando compilas mne sale a mi, pero todo esta con errores
//es xq esta en un solo doc puede ser... pero deb yam eria de compil
// arno xreo a mi me sale los mismos erroes, en todo caso copialo a uno nuevo en tu lap y compila
int main() {
	char var = 'a', & refa = var;
	int var1 = 1, & ref1 = var1;

	Conjunto<double> arregloPlantilla[3];
	Conjunto<char> letras;
	Conjunto<int> enteros;
	//letras.agregar(refa);
	//cout << letras;
}
//tampoco compila pero xq se coloco const en las sobrecargas??
//ahmm ya se que pasa  en algunos falta Conjunto<T>::miembro(); ya me salio... se los paso vaa
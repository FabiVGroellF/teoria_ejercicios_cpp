#include <iostream>

using namespace std;

int main() {
    int numero[] = {5,2,3,1,4};
    int i,dato;
    bool encontrado = false;

    cout << "Arreglo: ";
    for(i=0; i<5; i++){
        cout << numero[i] << " ";
    }

    cout << "\nIngrese el dato a buscar: ";
    cin >> dato;

    i = 0;
    // Busqueda secuencial
    while((encontrado == false) && (i < 5)){
        if(numero[i] == dato){
            encontrado = true;
        } else {
            i++;
        }
    }

    if(encontrado == true){
        cout << "El dato " << dato << " se encuentra en la posicion " << i << endl;
    } else {
        cout << "El dato " << dato << " no se encuentra en el arreglo" << endl;
    }

    return 0;
}
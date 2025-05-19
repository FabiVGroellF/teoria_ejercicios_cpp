#include <iostream>

using namespace std;

int main() {
    int numero[] = {5,2,3,1,4};
    int i,pos,aux;

    cout << "Arreglo original: ";
    for(i=0; i<5; i++){
        cout << numero[i] << " ";
    }

    // Ordenamiento por inserción
    for(i=0; i<5; i++){
        pos = i;
        aux = numero[i];

        while(pos>0 && numero[pos-1]>aux){
            numero[pos] = numero[pos-1];
            pos--;
        }
        numero[pos] = aux;
    }

    cout << "\nOrden ascendente: ";
    for(i=0; i<5; i++){
        cout << numero[i] << " ";
    }

    cout << "\nOrden descendente: ";
    for(i=4; i>=0; i--){
        cout << numero[i] << " ";
    }

    return 0;
}
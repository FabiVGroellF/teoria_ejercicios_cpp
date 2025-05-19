#include <iostream>

using namespace std;

int main() {
    int numero[] = {5,2,3,1,4};
    int i,j,aux;

    cout << "Arreglo original: ";
    for(i=0; i<5; i++){
        cout << numero[i] << " ";
    }

    // Ordenamiento burbuja

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(numero[j] > numero[j+1]){
                aux = numero[j];
                numero[j] = numero[j+1];
                numero[j+1] = aux;
            }
        }
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
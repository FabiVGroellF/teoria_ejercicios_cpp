#include <iostream>

using namespace std;

int main() {
    int numero[] = {1,2,3,4,5};
    int i,inf,sup,mitad,dato;
    bool encontrado = false;

    cout << "Arreglo: ";
    for(i=0; i<5; i++){
        cout << numero[i] << " ";
    }

    cout << "\nIngrese el dato a buscar: ";
    cin >> dato;

    inf = 0; // Inicializa el limite inferior
    sup = 5; // Inicializa el limite superior con la longitud del arreglo
    // Busqueda binaria
    while(inf<=sup){
        mitad = (inf + sup) / 2;
        if(numero[mitad] == dato){
            encontrado = true;
            break;
        }
        
        if(numero[mitad] > dato){ // Mitad mayor, se reduce el limite superior
            sup = mitad;
            mitad = (inf + sup) / 2;
        }

        if(numero[mitad] < dato){ // Mitad menor, se aumenta el limite inferior
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if(encontrado == true){
        cout << "El dato " << dato << " se encuentra en la posicion " << mitad << endl;
    } else {
        cout << "El dato " << dato << " no se encuentra en el arreglo" << endl;
    }

    return 0;
}
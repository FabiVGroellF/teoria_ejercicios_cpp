#include <iostream>
using namespace std;

// Desarrolle una función que retorne una lista ordenada a partir de la Intersección de 1 pila y 1 lista.
// Defina usted las precondiciones y estructuras de los nodos de la manera que considere más conveniente y detallar.


int main() {
    // Definición de la estructura del nodo de la lista
    struct Nodo {
        int data;
        Nodo* sgte;
    };

    // Definición de la estructura del nodo de la pila
    struct NodoPila {
        int data;
        NodoPila* sgte;
    };

    return 0;
}
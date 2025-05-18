#include <iostream>
using namespace std;

// 1. Crear una función que devuelva una lista conteniendo la unión de una pila, una cola y un vector (1,5 puntos)
struct Nodo {
    int dato;
    Nodo * siguiente;
};
struct NodoCola {
    int dato;
    NodoCola * fte;
    NodoCola * fin;
};

int pop(Nodo *&pila) {
    if (pila == NULL) {
        throw runtime_error("Pila vacía");
    }

    Nodo *temp = pila; // Apunta al nodo en la cima de la pila
    int dato = temp->dato; // Guarda el dato del nodo
    pila = pila->siguiente; // Mueve la cima de la pila al siguiente nodo
    delete temp; // Libera la memoria del nodo eliminado

    return dato; // Devuelve el dato del nodo eliminado
}

int desencolar(NodoCola *&cola) {
    if (cola == NULL || cola->fte == NULL) {
        throw runtime_error("Cola vacía");
    }

    NodoCola *temp = cola->fte; // Apunta al nodo al frente de la cola
    int dato = temp->dato; // Guarda el dato del nodo
    cola->fte = cola->fte->fte; // Mueve el frente de la cola al siguiente nodo

    if (cola->fte == NULL) { // Si la cola queda vacía, también actualizar el puntero fin
        cola->fin = NULL;
    }

    delete temp; // Libera la memoria del nodo eliminado

    return dato; // Devuelve el dato del nodo eliminado
}


void insertarOrdenado(Nodo *&lista, int dato) {
    Nodo *nuevo = new Nodo(); // Crear un nuevo nodo
    nuevo->dato = dato; // Asignar el dato al nuevo nodo
    nuevo->siguiente = NULL; // Inicialmente, el siguiente nodo es NULL

    // Si la lista está vacía o el dato del nuevo nodo es menor que el dato del primer nodo
    if (lista == NULL || lista->dato >= dato) {
        nuevo->siguiente = lista; // El nuevo nodo apunta al primer nodo
        lista = nuevo; // El nuevo nodo se convierte en el primer nodo
    } else {
        Nodo *actual = lista; // Nodo actual para recorrer la lista

        // Buscar la posición correcta para insertar el nuevo nodo
        while (actual->siguiente != NULL && actual->siguiente->dato < dato) {
            actual = actual->siguiente; // Avanzar al siguiente nodo
        }

        // Insertar el nuevo nodo en la posición encontrada
        nuevo->siguiente = actual->siguiente;
        actual->siguiente = nuevo;
    }
}

int const tamVec = 10;
int vec[tamVec]; // asumo que ya se sabe el tamaño

Nodo * unionPilaColaVec(Nodo * pila, NodoCola * cola, int vec[]) {
    Nodo * listaResult;
    int dato;

    while(pila!=NULL) {
        dato = pop(pila);
        insertarOrdenado(listaResult, dato);
    }
    while(cola!=NULL) {
        dato = desencolar(cola->fte);
        insertarOrdenado(listaResult, dato);
    }
    for(int i=0; i<tamVec; i++) {
        insertarOrdenado(listaResult, vec[i]);
    }

    return listaResult;
}
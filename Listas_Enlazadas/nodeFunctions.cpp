#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int value;
    struct Node * next;
};

class LinkedList
{
public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void createNode(int value)
    {
        Node *temp = new Node;
        temp->value = value;
        temp->next = nullptr;

        if (head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {	
            tail->next = temp;
            tail = temp;
        }
    }

    void pushNode(int value) {
        Node * new_node;
        new_node = new Node;

        new_node->value = value;
        new_node->next = head;

        head = new_node;
    }
    
    int pop() {
        int retval = 0;
        Node * next_node = nullptr;

        next_node = head->next;
        retval = head->value;
        delete head;
        head = next_node;

        return retval;
    }

    void removeByValue(int value) {
        /* Add your implementation here */
        if (head == NULL) {
            return; // La lista está vacía, no hay nada que eliminar
        }

        // Si el nodo a eliminar es el primero de la lista
        if (head->dato == value) {
            Nodo *temp = head; // Guardar el nodo a eliminar
            head = head->siguiente; // Mover el puntero de la lista al siguiente nodo
            delete temp; // Liberar la memoria del nodo eliminado
            return;
        }

        // Recorrer la lista para encontrar el nodo a eliminar
        Nodo *actual = head;
        while (actual->siguiente != NULL && actual->siguiente->dato != value) {
            actual = actual->siguiente; // Avanzar al siguiente nodo
        }

        // Si se encontró el nodo a eliminar
        if (actual->siguiente != NULL) {
            Nodo *temp = actual->siguiente; // Guardar el nodo a eliminar
            actual->siguiente = actual->siguiente->siguiente; // Saltar el nodo a eliminar
            delete temp; // Liberar la memoria del nodo eliminado
        }
    }

    void printList() {
        Node * current = head;

        while (current != nullptr) {
            cout << current->value << endl;
            current = current->next;
        }
    }

private:
    Node *head;
    Node *tail;
};


int main() {

    LinkedList linkedlist;

    linkedlist.pushNode(1);
    linkedlist.pushNode(3);
    linkedlist.pushNode(2);
    linkedlist.pushNode(5);

    linkedlist.removeByValue(3);

    linkedlist.printList();

    return 0;
}
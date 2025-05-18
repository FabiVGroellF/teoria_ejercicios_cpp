#include <iostream>
using namespace std;

/*
2. Se tiene un vector de Matriculas (codigo de curso, cantidad de alumnos, monto pagado)
y una lista con las nuevas reservas (codigo de curso, monto pagado). 
Actualizar el vector con los contenidos de la lista, considerando que por cada reserva 
se aumenta en 1 la cantidad de alumnos. (2,5 puntos)
*/


struct Matricula {
    int codCurso;
    int cantAlumnos;
    int montoGenerado;
};

struct NodoReservas {
    int codCurso;
    int montoGenerado;
    NodoReservas * siguiente;
};

Matricula vecMat[30];

void actualizarVector(NodoReservas * listaReservas) {
    NodoReservas * aux = listaReservas;

    while(aux != NULL) {
    for(int i=0; i<30; i++) {
        
        if(vecMat[i].codCurso == aux->codCurso) {
            vecMat[i].cantAlumnos++;
            vecMat[i].montoGenerado += aux->montoGenerado;
        }
    }

    aux = aux->siguiente;
    }
}
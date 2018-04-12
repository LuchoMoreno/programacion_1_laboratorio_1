#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"
#define TAM 5

//funcion que devuelva cantidad de numeros pares en el array
//Funcion que devuelva la cantidad de numeros positivos en el array
// misma funcion de buscar valor, pero en vez de valor netero, un char

int main()
{
    int vector(TAM)={5,6,7,1,3}
    int i;
    int edad;
    int mayor;
    int indice;

    cargarVector;
    mostarVector(vector,TAM);

    mayor = buscarMaximo(vector, TAM);
    printf("El maximo es: %d", mayor);

    indice = mostrarValor(vector, TAM, 14)

    return 0;
}


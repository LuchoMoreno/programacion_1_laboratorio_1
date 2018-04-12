#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"


void MostarVector(int[],int);
void Modificar(int[]);
int buscarMaximo(int[], int);

int main()
{
    int vector(TAM)={5,6,7,1,3}
    int i;
    int edad;
    int mayor;

    MostarVector(vector,TAM);
    mayor = buscarMaximo(vector, TAM);
    printf("El maximo es: %d", mayor);
    return 0;
}


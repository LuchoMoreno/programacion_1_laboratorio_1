#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include "vectores.h"




int main()
{
    int vector[TAM]={11,12,13,14,15};
    int i;
    int max;
    int indice;
     CargarVector(vector, TAM);
     MostarVector(vector,TAM);
     Modificar(vector);

     printf("\n\nSe ha modificado el vector.\n");
     printf("---------------\n");
     MostarVector(vector,TAM);

    max=maximo(vector,TAM);
    printf("\nEl numero maximo es: %d", max);


    indice = buscarValor(vector, TAM, 14);
    if (indice == -1)
    {
        printf("\nNo lo encontró");
    }
    else
    {
        printf("\nEncontro el valor");
    }
    return 0;
}

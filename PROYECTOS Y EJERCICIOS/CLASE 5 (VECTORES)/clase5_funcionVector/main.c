#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void mostrarVector(int[], int); // Va a recibir un vector, y la cantidad de elementos del vector.
void modificarValor(int[]);

int main()
{
int i;
int vector[TAM];

for (i=0; i<TAM; i++)
{

}
mostrarVector(vector, TAM);
modificarValor(vector);
mostrarVector(vector, TAM);
return 0;
}


void mostrarVector(int vec[], int tamanio)
{
    int i;
    for (i=0; i<tamanio; i++)
    {
        printf("%d -- %d\n",i, vec[i]);
    }
}

void modificarValor(int vec[])
{
    vec[3] = 789;
}

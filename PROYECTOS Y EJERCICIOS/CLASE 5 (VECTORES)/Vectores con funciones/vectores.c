#include "vectores.h"


void MostarVector(int vec[],int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)
        {
            printf("\nEl numero es: %d", vec[i]);
        }

}


void Modificar(int vec[])
{
    vec[1]=999;
}


int maximo (int vec[],int tama)
{
    int max;
    int i;
    int flag=0;
    for(i=0; i<tama; i++)
    {
        if(flag==0 || vec[i]>max || vec[i]>max)
        {
            max=vec[i];
            flag=1;
        }

    }
    return max;//
}

void CargarVector(int vec[],int tama)
{
    int i;
    for(i=0; i<tama; i++)
        {
            printf("\nIngrese numero: ");
            scanf("%d", &vec[i]);
        }
}

int buscarValor (int vec[], int tam, int valor)
{
    int index = 1;
    int i;
    for (int i=0; i<tam; i++)
    {
    if (valor == vec[1])
     {
         index = i;
         break;
     }
    }
    return index;
}

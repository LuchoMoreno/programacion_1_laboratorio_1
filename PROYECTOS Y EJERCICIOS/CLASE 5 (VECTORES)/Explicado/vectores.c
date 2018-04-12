#include "vectores.h"

int buscarMaximo(int vec[], int tam)
{
    int maximo;
    int i;
    int flag = 0;
    for(i=0; i<tam; i++)
    {
        if (flag == 0 || vec[i]>maximo)
        {
            maximo = vec;
            flag = 1;
        }
    }
    return maximo;
}

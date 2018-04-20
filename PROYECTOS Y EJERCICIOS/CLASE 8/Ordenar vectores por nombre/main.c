#include <stdio.h>
#include <stdlib.h>
#define T 10

// Cada fila un nombre.
// Cada columna un caracter.


int buscarInt(int[], int, int);
int main()
{
    int vectorInt[T]={1,2,3,4,5};
    int auxInt;

    char vectorString[T][30]={"Juan", "Ana", "Maria", "Pedro", "Luis"};
    char auxString[30];

    float vectorFloat[T]={5.3, 3.3, 6.5, 4.1, 2.21};
    float auxFloat;

    int i;
    int j;

    auxInt=buscarInt(vectorInt,T,3);
    printf("INDICE: %d\n",auxInt);


    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(strcmp(vectorString[i],vectorString[j])>0)  // Funcion para comparar strings
            {
                strcpy(auxString, vectorString[i]); // Funcion que copia una cadena en otra
                strcpy(vectorString[i],vectorString[j]);
                strcpy(vectorString[j],auxString);

                auxInt = vectorInt[i];
                vectorInt[i] = vectorInt[j];
                vectorInt[j] = auxInt;

                auxFloat=vectorFloat[i];
                vectorFloat[i]=vectorFloat[j];
                vectorFloat[j]=auxFloat;
            }
        }
    }



    for (i=0; i<T; i++ )
    {
        if(vectorInt[i]!=0)
        {
        printf("%d -- %s -- %f\n", vectorInt[i], vectorString[i], vectorFloat[i]);
        }
    }




    return 0;
}

int buscarInt(int enteros[], int tam, int cual)
{
    int indice = -1;
    int i;
    for (i=0; i<tam; i++) // Un for para recorrer todo el vector
    {
        if (enteros[i] == cual)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

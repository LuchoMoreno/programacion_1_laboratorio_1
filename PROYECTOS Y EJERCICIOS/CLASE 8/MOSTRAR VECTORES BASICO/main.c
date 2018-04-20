#include <stdio.h>
#include <stdlib.h>
#define T 10

// Cada fila un nombre.
// Cada columna un caracter.

int main()
{
    int vectorInt[T]={1,2,3,4,5};
    char vectorString[T][30]={"Juan", "Ana", "Maria", "Pedro", "Luis"};
    float vectorFloat[T]={5.3, 3.3, 6.5, 4.1, 2.21};
    int i;



    for (i=0; i<T; i++ )
    {
        if(vectorInt[i]!=0)
        {
        printf("%d -- %s -- %f\n", vectorInt[i], vectorString[i], vectorFloat[i]);
        }
    }


    return 0;
}

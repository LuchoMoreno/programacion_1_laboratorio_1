#include <stdio.h>
#include <stdlib.h>

// Se debe aplicar una funcion para evitar hacer cagadas. Se aplica TAM
// #define TAM 5, entonces cada vez que ponga TAM, va a valer 5, en lugar de poner un numero.

// COMO HACER QUE TODO SEA 0. Se pone el 0 en llaves.
// EL VECTOR TERMINA EN EL TAMAÑO DEL ARRAY -1.
int main()
{
    int vector[5]= {0}; // Si se quiere inicializar el vector en un numero, sòlo se pone ese numero.
    int i;

    for (i=0; i<5; i++) // Si quiero que todos los elementos esten cargados en 7
    {
        vector[i] = 7;
    }

    /* CARGA SECUENCIAL
    Implica pararme en cada uno de los elementos de manera consecutiva en cada
    elemento del vector.*/
    for (i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d,", &vector[i]);
    }



    /*
    Como mostrar los elementos de un vector, del 1 al 5, valores ingresados
    ya en las llaves del INT.
    */
    for (i=0; i<5; i++) // Si quiero mostrar todos los elementos
    {
        printf("%d -- %d\n",i, vector[i]); // Hay que decir, que elemento queremos que muestre
    }
    return 0;
}

/* COMO PEDIR UN VECTOR
int main()
{
    int vector[5]= {9, -3, 5, 14, -4}; // Elementos del vector
    int i;


    for (i=0; i<5; i++)
    {
        printf("%d -- %d\n",i, vector[i]); // Hay que decir, que elemento queremos que muestre
    }
    return 0;
}
*/

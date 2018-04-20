#include <stdio.h>
#include <stdlib.h>
#define T 2

/*
Legajo:
Nombre:
Nota 1:
Nota 2:
Promedio:

*/

float calcularPromedio (int, int);
void mostrarAlumnos (int[], char[][30], int[], int[], float[], int);

int main()
{
    int legajo[T];
    char nombre[T][30]; //3 nombres, 29 caracteres para usar.
    int nota1[T];
    int nota2[T];
    float promedio[T];
    int i;

    for(i=0; i<T; i++)  // Se usa una T porque la T vale 3.
    {
        printf("\nIngrese su legajo: ");  // Con esta funcion pido que se ingrese un legajo 3 veces.
        scanf("%d", &legajo[i]);

        printf("Ingrese su nombre: ");
        fflush(stdin);
        gets(nombre[i]);

        printf("Ingrese su nota 1: ");
        scanf("%d", &nota1[i]);

        printf("Ingrese su nota 2: ");
        scanf("%d", &nota2[i]);


        promedio[i]= calcularPromedio(nota1[i], nota2[i]);

    }

    mostrarAlumnos(legajo, nombre, nota1, nota2, promedio, 3);
    return 0;
}


float calcularPromedio (int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos (int legajo[], char nombre[][30], int nota1[], int nota2[], float promedio[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        printf("%5d %16s %5d %5d %.2f\n", legajo[i], nombre[i], nota1[i], nota2[i], promedio[i]);
    }
}


/* Funcion que reciba el vector del legajo, el tamaño del vector del legajo, y que reciba un numero de legajo.
La funcion devuelve el indice del legajo (si lo encuentra), y sino, devuelve -1.

*/

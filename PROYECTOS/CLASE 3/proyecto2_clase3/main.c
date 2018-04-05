#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[], int, int);
int validarEntero(int dato, int min, int max, char mensaje[]);


int main()
{
    int edad; // 18-60
    int legajo; // 1-1000
    int nota; // 1-10


    edad = pedirEntero("Edad: ", 18, 60);

    legajo = pedirEntero("Legajo: ", 1, 1000);

    nota = pedirEntero ("Nota: ", 1, 10);

    printf("\nLa edad es: %d y el legajo es: %d y su nota es: %d", edad, legajo, nota);

    return 0;
}

int pedirEntero(char mensaje[], int min, int max)
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);

    numero = validarEntero(numero, min, max, mensaje);

    return numero;
}

int validarEntero(int dato, int min, int max, char mensaje[])
{
        while(dato<min || dato>max)
    {
        printf("Error: Reingrese %s", mensaje);
        scanf("%d", &dato);
    }

    return dato;
}

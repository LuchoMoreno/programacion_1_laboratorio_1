#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[], int, int);
int validarEntero(int dato, int min, int max, char mensaje[]);
int pedirTexto(char[]);

int main()
{
    int edad; // 18-60
    int legajo; // 1-1000
    int nota; // 1-10
    int nombre;

    nombre = pedirTexto("");

    edad = pedirEntero("Edad: ", 18, 60);

    legajo = pedirEntero("Legajo: ", 1, 1000);

    nota = pedirEntero ("Nota: ", 1, 10);

    printf("\nSu nombre es: %c. Su edad es: %d. Su legajo es: %d. Y su nota es: %d", nombre, edad, legajo, nota);

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

int pedirTexto(char mensaje[])
{
    char texto;
    printf("Ingrese su nombre: ");
    scanf("%s", &texto);
    return texto;
}

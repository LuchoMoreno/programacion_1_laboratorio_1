#include <stdio.h>
#include <stdlib.h>

/* Declarracion de la funcion - Protitipo de la funcion.
/* Primero hay que tener en cuenta:

tipo_de_dato_devuelto idenfiticador ((parametros de entrada));

// tipo_de_dato_devuelto
(int, float, char, void, double, long)

// Idenfiticador

nombre representativo: verbo+objeto

//parametros de entrada (tipo de dato,variable)

declaro una variable por cada parametro (Mismas reglas de declaracion)

/************************************************************************/
// Primera instancia: Declarar un prototipo.
int mostrarEincrementar(int);

int main()
{
    int numero;
    int incremento;

    printf("Ingrese el numero: ");
    scanf("%d", &numero);

// Tercera instancia: Llamada a la funcion.
    incremento = mostrarEincrementar(numero); //---> parametro actual
    printf("\nEl numero incrementado es: %d", incremento);

    return 0;
}
// Segunda intancia: Implementacion o desarrollo de la funcion. Arriba se declara, abajo se desarrolla.

int mostrarEincrementar(int numero) //---> parametro formal
{
    int retorno;
    printf("El numero ingresado es: %d", numero);
    retorno = numero + 10;
    return retorno;

}

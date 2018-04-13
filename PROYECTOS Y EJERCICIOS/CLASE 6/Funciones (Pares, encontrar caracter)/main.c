#include <stdio.h>
#include <stdlib.h>

int contarPares(int[], int); //Formales

/** \brief determina si un caracter esta o no esta dentro del array
 *
 * \param char[] coleccion de caracteres
 * \param int tama�o de la coleccion
  * \param char[] caracter a buscar
 * \return int -1 si no lo encuentra, o el indice del valor encontrado
 *
 */

int buscarChar(char[], int, char);

int main()
{
    int vector[5]={5,2,9,6,5};
    char letras[5]={'f','g','a','m','q'};
    int indexLetra;
    int cantidad;

    cantidad = contarPares(vector, 5);
    indexLetra = buscarChar(letras, 5, 'a');

    if(indexLetra==-1)
    {
    printf("No se encuentra el caracter\n");
    }
    else
    {
    printf("El caracter se encuentra en el array\n");
    printf("index = %d\n", indexLetra);

    }

    printf("Cantidad de pares: %d", cantidad);
    return 0;
}


int contarPares(int array[], int cantidad) // Llamada
{
    int contPares = 0;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]%2==0)
        {
            contPares++;
        }

    }
    return contPares;
}

int buscarChar(char array[], int cantidad, char caracter)
{
    int index = -1;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]==caracter)
        {
            index = i;
            break;
        }
    }

    return index;
}

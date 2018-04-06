#include <stdio.h>
#include <stdlib.h>

int pedirnumero();
int main()
{
    int ano;
    ano = pedirnumero();
    printf("El numero fue: %d", ano);
    return 0;
}

int pedirnumero()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    return numero;

}

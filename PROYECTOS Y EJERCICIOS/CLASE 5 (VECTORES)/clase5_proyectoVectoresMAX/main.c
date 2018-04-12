#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void MostarVector(int[],int);
void Modificar(int[]);
int maximo (int[],int);

int main()
{
    int vector[TAM]={11,12,13,14,15};
    int i;
    int max;
    for(i=0; i<TAM; i++)
        {
            printf("\nEl numero es: %d", vector[i]);
        }
     for(i=0; i<TAM; i++)
        {
            vector[i]=7;
        }
     printf("\n------------------------");
     MostarVector(vector,TAM);
     printf("\n------------------------");
     for(i=0; i<TAM; i++)
        {
            printf("\nIngrese numero: ");
            scanf("%d", &vector[i]);
        }
     printf("\n------------------------");
     MostarVector(vector,TAM);
     printf("\n------------------------");
     Modificar(vector);
     MostarVector(vector,TAM);
     max=maximo(vector,TAM);
     printf("\nEl numero maximo es: %d", max);
    return 0;
}

void MostarVector(int vec[],int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)
        {
            printf("\nEl numero es: %d", vec[i]);
        }

}
void Modificar(int vec[])
{
    vec[3]=999;
}
int maximo (int vec[],int tama)
{
    int max;
    int i;
    int flag=0;
    for(i=0; i<tama; i++)
    {
        if(flag==0)
        {
            max=vec[0];
            flag=1;
        }
        if(vec[i]>max)
        {
            max=vec[i];
        }
    }
    return max;
}

//ESTO ES UNA FUNCION GENERICA
int pedirEntero(char mensaje[], int min, int max)
{
    int numero;

    printf("Ingrese%s",mensaje);//%s es para una cadena (STRING)
    scanf("%d",&numero);

    numero = validarEntero(numero,min,max,mensaje);

    return numero;
}


//FUNCION GENERICA PARA VALIDAR
int validarEntero(int dato,int min,int max,char mensaje[])
{
        while(dato < min || dato > max)
    {
        printf("Error Reingrese%s",mensaje);//%s es para una cadena (STRING)
        scanf("%d",&dato);
    }
}

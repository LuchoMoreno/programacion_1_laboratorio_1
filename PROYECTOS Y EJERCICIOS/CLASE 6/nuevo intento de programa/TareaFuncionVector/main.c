#include <stdio.h>
#include <stdlib.h>
/*
Tarea:

    DECLARAR 3 VARIABLES.

    char nombre[?];
    char apellido[?];
    char apellidoYNombre[?];

    ***********

    Ingresar el apellido scarafilo
    Ingresar el nombre german // tener en cuenta si es compuesto

    Variable apellidoynombre = Escarafilo, German". Primera letra mayuscula, y separado con coma y espacio.

*/

int main()
{
    char nombre[15];
    char apellido[15];
    char nombreApellido[100];

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);
    nombre[0]=toupper(nombre[0]);


    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(apellido);
    apellido[0]=toupper(apellido[0]);

    strcat(nombre, apellido);

    printf("Su nombre es: %s", nombre);
    printf("\nSu nombre es: %s", apellido);



    return 0;
}


/*
Define "nombre" como un arreglo de chars de tamaño indefinido, para que lo uses al
recibir el nombre por la entrada estándar:

// char nombre[]={""};

Luego, usa la función toupper de la librería ctype, que te permite convertir
el primer caracter de esa cadena (nombre[0]) a su equivalente en mayúsculas
(siempre que se trate de una letra, por supuesto)

// nombre[0]=toupper(nombre[0]);

.
Al final, tendrías un programa como este:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
char nombre[]={""};
printf("Ingrese su nombre: ");
scanf("%s", &nombre);
nombre[0]=toupper(nombre[0]);
printf("Su Nombre es: %s\n", nombre);
return 0;
}

*/

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

// 1. User Defined Data Type (UDDT)

/*
Los User Defined DataTypes son tipos de datos creados por los
desarrolladores de software para realizar múltiples acciones.

Estos datos pueden estar compuestos por otro tipo de datos
previamente definidos pero, por defecto, no son parte del sistema.
Además, dependiendo del lenguaje de programación que manejes,
deberás tener claro (o no) el consumo de memoria.

Por ejemplo, las aplicación de cobranzas necesitan un tipo
de dato personalizado para las personas con deudas.
*/

//Aqui indicamor como debe comportarse la estructura
//pero aun no esta ocupando espacio en memoria
struct client 
{
    char Name[50];  //Variable con un largo de hasta 50 caracteres
    char ID[10];  //Variable con un largode hasta 10 caracteres
    float Credit;  //Estandar de un float en C es 4 bytes en Win32
    char Address[100];  //Variable con un largo de hasta 100 caracteres
};

main(int argc, char const *argv[])
{
    //Hacemos una instancia del struct, ahora si ocupa un lugar en memoria
    struct client first_client = {0}; // Una instancia de mi struct con todos los valores en 0
    
    //La funcion strcpy (string copy) nos permite copiar un valor a la variable de
    //tipo char recibe 2 argumentos: el destino y el valor de la variable

    strcpy(first_client.Name, "Elme Mero");
    strcpy(first_client.ID, "0395729103");
    first_client.Credit = 50000;
    strcpy(first_client.Address, "Calle Almeja, Fondo de Bikini");

    
    //Impresion de valores
    printf("Client name: %s \n", first_client.Name);
    printf("Client ID: %s \n", first_client.ID);
    printf("Client credit: %f \n", first_client.Credit);
    printf("Client Address: %s \n", first_client.Address);

    return 0;
}

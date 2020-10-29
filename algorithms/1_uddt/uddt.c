#include "stdlib.h"
#include "stdio.h"
#include "string.h"

// 1. User Defined Data Type (UDDT)

struct client 
{
    char Name[50];
    char ID[10];
    float Credit;  //Estandar de un float es 4 bytes en Win32 y en Win64 es mayor
    char Address[100];
};

main(int argc, char const *argv[])
{
    struct client first_client = {0}; // Una instancia de mi struct con todos los valores en 0
    
    strcpy(first_client.Name, "Elme Mero");
    strcpy(first_client.ID, "0395729103");
    first_client.Credit = 50000;
    strcpy(first_client.Address, "Calle Almeja, Fondo de Bikini");

    printf("Client name: %s \n", first_client.Name);
    printf("Client ID: %s \n", first_client.ID);
    printf("Client credit: %f \n", first_client.Credit);
    printf("Client Address: %s \n", first_client.Address);

    return 0;
}

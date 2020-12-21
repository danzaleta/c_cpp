#include <iostream>
#include <cstring>

using namespace std;


// USER DEFINED DATA TYPES

struct uddt
{
    char name[50];
    char ID[10];
    float life;
    char address[100];
};


int main()
{
    struct uddt my_uddt = {0};

    strcpy(my_uddt.name, "Elme Mero");
    strcpy(my_uddt.ID, "0395729103");
    my_uddt.life = 50000;
    strcpy(my_uddt.address, "Calle Almeja, Fondo de Bikini");

    
   //Impresion de valores
    cout<< "Client name: " << my_uddt.name <<endl;
    cout<< "Client ID: " << my_uddt.ID <<endl;
    cout<< "Client credit: " << my_uddt.life <<endl;
    cout<< "Client Address: " << my_uddt.address <<endl;

    return 0;
}

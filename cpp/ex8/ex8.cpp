#include <iostream>
using namespace std;

// 8. Funciones con parametros

void Print (string message, int temp)
{
    cout<< message <<endl;
    cout<< "La temperatura es: " << temp << " grados." <<endl;
}

int main()
{
    Print("Buenos dias amo ;)", 32);
    Print("k grande", 40);
    Print("nembe pa", 52);
    Print("Bienvenido a monterrey", 60);
   
    return(0);
}
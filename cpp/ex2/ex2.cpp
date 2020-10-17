#include <iostream>
using namespace std;

// 2. APUNTADORES

int main()
{
    int direccion = 3509;
    int segundadir = 1337;

    int* apuntadorADir;
    apuntadorADir = &direccion;
    *apuntadorADir = 3;
    apuntadorADir = &segundadir;

    cout<< *apuntadorADir <<endl;

    return(0);
}
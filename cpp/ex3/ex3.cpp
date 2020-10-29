#include <iostream>
using namespace std;

// 3. Entrada de datos de usuario

int main()
{
    int base = 0;
    int altura = 0;

    cout<< "Introduce la base de tu rectangulo:  " <<endl;
    cin>> base;

    cout<< "Introduce la altura de tu rectangulo: " <<endl;
    cin>> altura;

    cout<< "El area es: " << base*altura <<endl;

    return 0;
}
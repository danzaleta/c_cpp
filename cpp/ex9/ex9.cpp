#include <iostream>
using namespace std;

// 9. Arrays

/* 
Nota cuando ponemos un limite a un array (por ejemplo 5 espacios) y declaramos 6, muchos lenguajes
nos masrcan directamente error pero C++ no. El programa se ejecutara y si declaramos espacios mas,
fuera del limite que pusimos, pueden ocurrir cosas como que el programa crashee, o incluso la pc o
algun programa abierto porque puede que esos espacios extra intentaran ocupar espacios de memoria
ya ocupados por otro programa de la pc o por el propio OS.
*/

int main()
{
    int index = 0;
    cout<< "indice" <<endl;
    cin>>index;

    string names [4] = {"ala", "ele", "ili", "olo"};
    string currentName = names[index];

    cout<< currentName <<endl;

    return 0;
}
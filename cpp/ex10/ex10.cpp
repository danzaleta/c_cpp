#include <iostream>
using namespace std;

// 10. Loops

/*
# While vs. Do While

### While
- Primero pregunta la condicion y despues ejecuta el bloque de comandos.

### Do While
- Ejecuta primero el bolque de comandos y despues pregunta la condicion.
*/

int main()
{
    int counter = 0;
    
    bool isHappy = true;
    char input = ' ';

/*
    while (counter < 100)
    {
        cout<< counter <<endl;
        counter++;
    }


    do
    {
        cout<< ":))))" <<endl;
        cout<< "Seguis feliz tio? (T/F)" <<endl;
        cin>> input;

        if (input == 'F')
        {
            isHappy = false;
            cout<< "D:  k sad";
        }
        
    } while (isHappy == true);
*/


    for (int i = 0; i < 100; i++)
    {
        if (i%2 == 0)
        {
            cout<< "PAR" <<endl;
        }
        else
        {
            cout<< "inpar" <<endl;
        }
    }
    
    return 0;
}
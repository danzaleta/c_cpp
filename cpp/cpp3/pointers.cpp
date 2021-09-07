#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //No tenemos una forma facil de acceder al tamaño de lista
    //Se almacena cada un de los valores en un espacio de memoria distinto

    /**
     * Si intento acceder a la direccion de memoria de un array, me da la
     * direccion del index 0 de este, si intento iterar entre la direccion
     * de cada elemento, se imprimen todas las direcciones de cada index
     */




    int nums[] = { 10,86,31,62 };

    cout << "Direcciones de memoria de cada valor" << endl;

    for (int i = 0; i < sizeof(nums)/sizeof(int); i++)
    {
        nums[i];
        cout << "Index: " << i << " Valor: " << nums[i] << " Direccion: " << &nums[i] << endl;        
    }
    

    return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* STRUCTS
    *------------------------
    */

    struct myStruct
    {
        /* data */
    };

    /*-----------------------*/



    /* UNIONS
     *------------------------
     * Los union son utiles cuando quiero almacenar informacion de un tipo de dato u otro,
     * pero nunca ambos al mismo tiempo. Usan un solo registro en la memoria RAM.
    */
    
    union num_letra
    {
        int asInt;
        float asFloat;
    };

    num_letra x;

    x.asInt = 64;
    x.asFloat = 15.5;

    cout << "\nAsInt: " << x.asInt << endl;
    cout << "AsFloat: " << x.asFloat << endl;
    
    x.asInt = 64;

    cout << "\nAsInt: " << x.asInt << endl;
    
    cout
    << "\nTamaño de x en bytes: " << sizeof(x)
    << "\nTamaño de x.asInt en bytes: " << sizeof(x.asInt)
    << "\nTamaño de x.asFloat en bytes: " << sizeof(x.asFloat)
    << endl;

    cout
    << "\nDireccion de x: " << &x
    << "\nDireccion de x.asInt: " << &x.asInt
    << "\nDireccion de x.asFloat: " << &x.asFloat
    << endl;

    /*-----------------------*/
    


    /* ENUMS
    *------------------------
    * Ahorra memoria utilizando el mismo registro en
    * la memoria RAM.
    *  
    */

    enum Semana
    {
        lunes = 'L',
        martes = 'M',
        miercoles = 'W',
        jueves = 'J',
        viernes = 'V'
    };

    // Declarado tradicionalmente
    Semana dia = jueves;

    //Declarado dinamicamente
    Semana *day = new Semana(); 
    *day = lunes;

    cout << "\nValor de dia: " << (char)dia << " Direccion: " << &dia << endl;

    cout << "Value of day: " << (char)*day << " Adress: " << &day << endl;
    
    /*-----------------------*/

    return 0;
}

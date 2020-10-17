#include<iostream>
using namespace std;

// 6. Consicional switch

int main()
{
    int math = 0;
    int bio = 0;

    cout<< "Calificacion de matematicas" <<endl;
    cin>> math;

    switch (math)
    {
    case 10:
        cout<< "Sos un genio parce" <<endl;
        break;
    
    case 7:
        cout<< "Mmm sos aceptable,tenes 7" <<endl;
        break;

    case 0:
        cout<< "Sos una desonrra forro" <<endl;
        break;


    default:
        cout<< "Sos default" <<endl;
        break;
    }

    return 0;
}
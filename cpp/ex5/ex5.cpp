#include <iostream>
using namespace std;

// 5. EJEMPLO DE USO DE if-else

int main()
{
    int math = 0;
    int bio = 0;

    cout<< "Calificacion de matematicas" <<endl;
    cin>> math;

    cout<< "Calificacion de biologia" <<endl;
    cin>> bio;

    if (math==10)
    {
        cout<< "Sos un genio parce" <<endl;
    }
    else if (math>6)
    {
        cout<< "Mmm sos aceptable" <<endl;
    }
    else
    {
        cout<< "Sos una desonrra forro" <<endl;
    }

    return 0;
}
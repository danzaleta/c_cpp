#include <iostream>
using namespace std;

// 4. EJEMPLO DE USO DE if

int main()
{
    int math = 0;
    int bio = 0;

    cout<< "Calificacion de matematicas" <<endl;
    cin>> math;

    cout<< "Calificacion de biologia" <<endl;
    cin>> bio;

    if (math>6)
    {
        cout<< "Aprobaste matematicas" <<endl;
    }

    if (bio<8)
    {
        cout<< "Reprobaste biologia" <<endl;
    }

    return 0;
}


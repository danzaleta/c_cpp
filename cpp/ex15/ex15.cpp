#include <iostream>
#include <string>

using namespace std;

// 15. Clases y Abstraccion

class Human
{
public:
    Human(int SpawnAge) // Constructor
    {
        Age = SpawnAge;
    }

    void Think()
    {
        cout<< GetDeepThoughts() <<endl;
    }

    int Age;

private:

    int SocialLevel = 0;
    int Intelligence = 0;
    int Luck = 0;

    string GetDeepThoughts()
    {
        if (SocialLevel + Luck > 100)
        {
            return "Creo que soy un ciudadano primermundista";
        }
        else if (Luck > Intelligence)
        {
            return "Me ando poniendo suertudo";
        }
        else if(Age > 18)
        {
            return "Ya puedo tomar bacacho con coca";
        }
        else
        {
            return "No pienso nada tio";
        }
        
    }
};



int main()
{
    Human Bob(89);

    Bob.Think();

    return 0;
}
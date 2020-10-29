#include <iostream>
#include <string>

using namespace std;

// 16. Clases y Herencia

class Mago // Clase padre
{
private:

public:
    int mana,
        hp,
        power;
    
    Mago(int iMana, int iHP, int iPower) //Constructor
    {
        mana = iMana;
        hp = iHP;
        power = iPower;
    }

    void Spell()
    {
        cout<< "Katon: tu gfa no jutsu " << power <<endl;
    }
};

class MagoHielo:public Mago
{
public:
    MagoHielo(int iMana, int iHP, int iPower):Mago(iMana, iHP, iPower)
    {
        mana = iMana;
        hp = iHP;
        power = iPower + 10;
    }

private:

};


int main()
{
    Mago Potter(100, 100, 20);
    Potter.Spell();

    MagoHielo ElBarbas(100, 100, 20);
    ElBarbas.Spell();

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

// 17. Clases, Encapsulamiento, Abstraccion, Herencia y Polimorfismo

/*
En este ejemplo se crea una clase Mago, hereda sus valores a las clases
MagoHielo y MagoFuego. En las clases heredadas de Hielo y Fuego les doy
caracteristicas particulares (por ejemplo los magos de hielo tienen un
bonus de poder y los de fuego un bonus de salud).

En main creo a dos magos, uno de hielo y uno de fuego

*/

class Mago
{
public:
    Mago(int BasePower, int BaseHP) //Constructor de la clase
    {
        power = BasePower;
        hp = BaseHP;
    }

    float Damage()
    {
        return power;
    }

    void GetDamage(int Value)
    {
        hp -= Value;
        
        cout<< "Salud sobrante: " << hp <<endl;
    }

    void SpellGreet()
    {
        cout<< "El hechicerooooo" <<endl;
    }

    void PrintHP()
    {
        cout<< hp <<endl;
    }

protected: // Nadie tiene acceso directo a esto, pero si puede heredar valores, a diferencia de private

    int power,
        hp;
};

class MagoHielo : public Mago
{
public:
    MagoHielo(int BasePower, int BaseHP) : Mago(BasePower, BaseHP)
    {
        power = BasePower + 1;
        hp = BaseHP;
    }
};

class MagoFuego : public Mago
{
public:
    MagoFuego(int BasePower, int BaseHP) : Mago(BasePower, BaseHP)
    {
        power = BasePower;
        hp = BaseHP + 10;
    }
};

int main()
{
    Mago* currentMago;

    MagoHielo Potter(10, 10);
    MagoFuego ElBarbas(10, 10);

    Potter.GetDamage(5);
    //currentMago = &Potter;
    //currentMago->GetDamage(5);

    currentMago = &ElBarbas;
    currentMago->GetDamage(1);

    ElBarbas.PrintHP();
    Potter.PrintHP();

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

// 14. Clases y encapsulamiento

class Dog
{
//Cosas publicas
public:

    Dog(string name, string bark)
    {
        dogName = name;
        dogBark = bark;
    }

    string GetName()
    {
        return dogName;
    }

    void SetName(string NewName)
    {
        dogName = NewName;
    }

    void Bark()
    {
        cout<< dogBark <<endl;
    }

//Cosas privadas
private:
    string dogName;
    string dogBark;
};

int main()
{
    Dog PerroUno("woody", "ajua");
    Dog PerroDos("joaquin", "yepeyepe");
    
    cout<< PerroUno.GetName() <<endl;

    PerroUno.SetName("filadelfio");

    cout<< PerroUno.GetName() <<endl;
    PerroUno.Bark();

    cout<< PerroDos.GetName() <<endl;
    PerroDos.Bark();

    return 0;
}
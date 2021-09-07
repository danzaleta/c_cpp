#include <iostream>

using namespace std;

class Persona
{
    private:
        string name;
        int age;
    
    public:
        static int num_personas;

        // CONSTRUCTOR: Se ejecuta cuando se inicializa
        Persona(string name, int age);

        ~Persona() // DESTRUCTOR: Se ejecuta cuando termina el programa
        {
            cout << "Destructor de " << name << endl;
        }

        // Implementacion tradicional de funcion que retorna la clase
        Persona &SetName(string name)
        {
            this -> name = name;
            return *this;
        }

        // Implementacion por fuera de la clase de funcion que retorna la clase
        Persona &SetAge(int age);

        void Hi();
};

// Los miembros estaticos son utiles para intercambiar mensajes entre clases

// Definiendo este valor estatico fuera de la clase hara que pueda modificarse
// Definiciones de comportamiento de la clase fuera de la clase

int Persona::num_personas; //Esto podria considerarse una instancia por clase, no por copia de clase.

Persona::Persona(string name, int age)
{
    this -> name = name;
    this -> age = age;

    num_personas += 1;
} 

void Persona:: Hi()
{
    cout << "Hola q ases, soy " << name << ", y mi edad es " << age << endl;
}

// Implementacion desde afuera de una funcion que retorna la clase
Persona &Persona::SetAge(int age)
{
    this -> age = age;
    return *this;
}




int main(int argc, char const *argv[])
{
    Persona *p2 = new Persona("Dan", 25);

    p2 -> Hi();

    p2 -> SetName("Daniel");
    p2 -> SetAge(23);

    p2 -> Hi();

    p2 -> SetName("Tito").SetAge(10).Hi();

    // A pesar de ser un valor estatico, puede modificarse de la siguiente forma
    Persona::num_personas = 6;

    cout << Persona::num_personas << endl;

    return 0;
}

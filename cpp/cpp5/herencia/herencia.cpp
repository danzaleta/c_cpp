#include <iostream>
#include <string>

using namespace std;

class Animal
{
    /**
     * public: Todos pueden acceder y editar
     * protected: Solo clases heredadas pueden acceder
     * private: Ninguna clase puede acceder
    */
protected:
    static int num_animales;
    string comida;

public:
    Animal();
    ~Animal();

    static int GetAnimalNumber();

    string GetFood()
    {
        return comida;
    }

    /**
     * A esta funcion se le puede pasar cualquier clase Animal o heredada de Animal
     * como argumento para que seleccione la comida que se le asigno a la misma 
     * y la imprima
     * */

    void Eat(Animal *a)
    {
        cout << "Este animal come " << a->comida << "... riko riko" << endl;
    }
};

int Animal::num_animales;

Animal::Animal()
{
    cout << "Creando un animalito... " << endl;
    num_animales += 1;
}

Animal::~Animal()
{
    cout << "Murio un animalito... " << endl;
    num_animales -= 1;
}

int Animal::GetAnimalNumber()
{
    return num_animales;
}

/** CLASES QUE HEREDAN DE ANIMAL
 * 
*/
/*-------------------------------------------*/
class Herviboro : public Animal
{
private:
    /* data */
public:
    Herviboro() : Animal()
    {
        /**
         * Como Herviboro hereda de Animal, podemos setear la variable "comida"
         * (que se declara en Animal) con un valor propio, de modo que solo
         * valdra esto para las instancias de Herviboro
        */
        this->comida = "Plantas";
    }

    /**
     * Se pueden declarar metodos para las clases que heredan de otras clases,
     * de modo que la clase padre nunca sabra de estos, pero si la clase donde
     * se declaran, y clases que le hereden,en caso de que mas clases hereden
     * de esta clase que hereda de Animal.s
    */
    void Pastar()
    {
        cout << "Este animal esta comiendo yerba... " << endl;
    }
};

class Carnivoro : public Animal
{
public:
    Carnivoro() : Animal()
    {
        this->comida = "Carne"; // Reasignamos el tipo de alimento en el constructor
    }

    void Cazar()
    {
        cout << "Este animal esta cazando herviboros... " << endl;
    }
};

/*-------------------------------------------*/

/** CLASE DE HERENCIA MULTIPLE
 * 
*/
class Omnivoro : public Herviboro, public Carnivoro
{
public:
    Omnivoro() : Herviboro(), Carnivoro()
    {
    }

    void Eat()
    {
        cout << "Este animal come como plantas y carne" << endl;
    }
};

/**
 * MAIN
*/
int main(int argc, char const *argv[])
{
    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();

    Omnivoro *o = new Omnivoro();

    cout << "Numero de animalitos: " << Animal::GetAnimalNumber() << endl;

    // POLIMORFISMO
    // una misma funcion, de una clase, con diferentes entradas
    /**
     * El polimorfismo no es tanto una implementacion  especifica que se
     * escriba en codigo, sino mas bien una intencion o consideracion que
     * se debe tener haciendo POO,no es como por ejemplo definir clases,
     * funciones o herencia, que estas tienen reglas de sintaxis e 
     * implementacion. El polimorfismo es mas bien una forma de pensar en
     * la opcion mas viable para resolver un problema de forma generalizada.
    */

    a->Eat(a); // Un animal cualquiera come

    a->Eat(h);   // Un animal herviboro come
    h->Pastar(); // Solo un animal herviboro puede pastar

    a->Eat(c);  // Un animal carnivoro come
    c->Cazar(); // Solo un animal carnivoro puede cazar

    /**
     * Se reescribio el metodo en Omnivoro, porque para C++, se necesita elegir
     * de que padre se requiere ejecutar el metodo, pero 
     * */ 
    o->Eat();    // Un animal omnivoro como como herviboro y carnivoro
    o->Pastar(); // Un animal omnivoro puede pastar como herviboro
    o->Cazar();  // Un animal omnivoro puede cazar como carnivoro

    delete a;
    cout << "Numero de animalitos: " << Animal::GetAnimalNumber() << endl;

    // Siempre aparecera mas de un animal creado porque Omnivoro, al Heredar doble
    // crea un Herviboro y un Carnivoro, como si creara dos animales.

    /**
     * NOTA: Una clase heredada puede sobre escribir metodos de la clase que hereda
     * dentro de si mismo. Por ejemplo en Omnivoro para no tener que seleccionar de
     * cual padre quiere heredar, podria declarar su propio metodo Eat dentro de si
     * y seria algo valido
     * 
     * */

    return 0;
}
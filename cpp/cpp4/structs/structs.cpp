#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string name;
    int age;
};

int main(int argc, char const *argv[])
{
    /**
     * Se aparta un segmento de memoria del tamaño de bytes
     * segun las variables dentro de la estructura creada
    */

    /**
     * Se reserva en memoria desde compilacion y luego se ejecuta
     * el programa.
    */
    Persona p1 = Persona();;
    p1.name = "Dan";
    p1.age = 23;

    /**
     * Primero se ejecuta el programa y durante la ejecucion se
     * reserva la memoria. La memoria se reserva de forma dinamica.
    */
    Persona *p2 = new Persona();
    p2 -> name = "Dan";
    p2 -> age = 10;
    
    /**
     * Persona p = Persona();
     * 
     * Crea un objeto del tipo Persona en el stack de manera estática (al tiempo de compilación), mientras que:
     * 
     * Persona *p = new Persona();
     * 
     * Crea un objeto del tipo Persona en el heap de manera dinámica (al tiempo de ejecución)
     * 
     * La memoria dinamica que reservamos con new en el heap, debemos liberarla para no generar
     * memory leaks o pérdidas de memoria. Para liberar un objeto reservado con new se utiliza:
     * 
     * delete p;
    */

    return 0;
}

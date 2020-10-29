#include <iostream>
using namespace std;

// 1. Estructuras y apuntadores

struct Vector
{
    float x, y, z;
};

struct Jugador
{
    string nombre;
    int ps;
    Vector posicion;
};


int main()
{
    Jugador yo;
    yo.nombre = "Daniel";
    yo.ps = 100;
    yo.posicion.x =
    yo.posicion.y =
    yo.posicion.z =
    0;

    Jugador* ptrYo; // Declaramos un puntero a un objeto Jugador
    ptrYo = &yo;    // Creamos el enlace del puntero. Esto siempre debe hacerse al crear un puntero.

    // Se pueden crear tantos punteros de un objeto como se necesite.

    cout << "El nombre del jugador es " << yo.nombre << ", tiene " << yo.ps << " puntos de salud. Y se localiza en " <<
        " x=" << yo.posicion.x << " y=" << yo.posicion.y << " z=" << yo.posicion.z << endl;

    ptrYo->ps -= 33;
    ptrYo->nombre = "Juan";

    cout << "El nombre del jugador es " << yo.nombre << ", tiene " << yo.ps << " puntos de salud. Y se localiza en " <<
        " x=" << yo.posicion.x << " y=" << yo.posicion.y << " z=" << yo.posicion.z << endl;
}
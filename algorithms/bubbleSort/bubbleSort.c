//1.- Hacer comparaciones de elementos adyacentes
//2.- Repetir hasta tener un recorrido completo sin ningun swap

#include <stdio.h>

//Funcion que cambia la posicion de numeros adyacentes
void CambiarPos(int *n1, int *n2)  //n1 seria el valor mayor, n2 el menor
{
    //Debemos guardar en una variable temporal el valor de n1,ya que sera
    //sobre escrito por el valor de n2. Recordemos que n2 al ser de los dos
    //el numero menor, debe cambiarse a la posicion de n1, mientras que el
    //valor de n1 debe cambiarse a la posicion de n2 para cumplir el ordenamiento.

    int temp = *n1;    //almacenamos el valor de n1 en una variable temporal
    *n1 = *n2;        //a n1 le damos el valor de n2 ya que n2 es menor a n1
    *n2 = temp;      //a n2 le damos el valor de n1 (guardado en una var temp) ya que n1 es mayor a n2
}

//Funcion que evalua para realizar el ordenamiento
void BubbleSort(int s[], int n)
{
    int i, j;

    //Loop de veces que va a iterarse. i puede tomarse como el numero total de elementos que ya se han
    //ordenado correctamente al final de la lista. al inicio i cale 0, y debe terminar valiendo el ultimo
    //indice de la lista (en este caso 9)
    //este for se detiene cuando i es igual al ultimo index del array, porque indica que ya esta todo ordenado
    for (i = 0; i < n-1; i++) //se pone n-1 porque n es igual al numero de elementos dentro de la lista y necesitamos acceder por index
    {
        //Loop que recorre el array y hace switch de elementos. j puede tomarse como el elemento actual de
        //la lista en el que estamos posicionados. 
        //este for se detiene cuando j es igual al ultimo numero no ordenado del array. Por ejemplo si n=10, i=9 y j=0, solo
        //se evaluaria la primer posicion porque n-i-1 seria 0, asi que el for se repetiria solo 1 vez, evaluando si el numero
        //adyacente al index 0 es menor que el index 0
        printf("\n");
        printf("Recorrido: %d \n", i+1);
        printf("Orden actual: ");
        printf("|");
        Imprimir(s, n);
        printf("\n");
        printf("i=%d \n", i);
        printf("\n");


        for (j = 0; j < n-i-1; j++) 
        {
            //En esta condicion solo peguntamos si la posicion actual de la lista (guardada en j) es mayor que la siguiente posicion
            if (s[j] > s[j+1])
            {
                //Si la condicion se cumple, le pasamos la referencia de ambas posiciones a la funcion CambiarPos
                CambiarPos(&s[j], &s[j+1]);
            }
            printf("j=%d",j);
            printf(" -->| ");
            Imprimir(s, n);
        }
        printf("------------------------------------------------------------------------------- \n");
    }
}

int Imprimir(int s[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf(" %d,", s[i]);
    }
    printf("\n");
    //printf("\n Ordenamiento terminado");
}


int main(int argc, char const *argv[])
{
    int s[] = {100, 1992, 0, 5, -1};    // S es el array que almacena los datos que van a ordenarse
    int n = sizeof(s)/sizeof(s[0]);     // N es solo la variable que indica el numero total de elementos dentro del array S
    
    BubbleSort(s, n);
    printf("\n");

    return 0;
}

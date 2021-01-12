#include <stdio.h>
#include <math.h>

long result;
int n;

long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return(n * factorial(n-1));
    }
}


int main(int argc, char const *argv[])
{
    printf("Calcula el factorial de: \n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("El numero debe ser positivo!");
    }
    else
    {
        result = factorial(n);
        printf("%d! = %ld", n, result);
    }

    return 0;
}

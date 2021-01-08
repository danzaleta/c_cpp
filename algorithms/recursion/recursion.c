#include <stdio.h>
#include <math.h>

long fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return(n * fact(n-1));
    }
}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

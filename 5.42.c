#include <stdio.h>

/*
5.42

Recursive MCD
*/

//      PROTOTYPES
int mcd( int a, int b);


#define NUMERO_1 180
#define NUMERO_2 324

int main(void)
{
        int mayorComunDivisor = mcd(NUMERO_1, NUMERO_2);
        printf("El maximo comun divisor entre %d y %d es: --> %d\n",NUMERO_1, NUMERO_2, mayorComunDivisor);
}

int mcd( int a, int b)
{
        if( b == 0)
        {
                return a;
        }
        else
        {
                return (mcd( b, a % b));
        }
}

#include <stdio.h>

/*
5.29
MCD
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
        for( int i = b; i > 1; i--)
        {
                if( ( ( a % i)==0) && ( ( b % i)==0) )
                {
                        return i;
                }
        }
        return 1;
}

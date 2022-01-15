#include <stdio.h>

/*
5.26
Searching for perfect numbers
*/

//prototype of the function
int perfect(int a);

int main(void)
{
        for( int i = 2; i <= 1000; i++)
        {
                if( perfect(i))
                {
                        printf("Number %d is a perfect number\n", i);
                }
        }
}


int perfect(int a){

        int suma = 1;

        for(int i = 2; i < a; i++)
        {
                if( ( a % i) == 0)
                {
                        suma += i;
                }
                if ( suma > a)
                {
                        break;
                }
        }
        if (suma == a)
        {
                return 1;
        }
        else
        {
                return 0;
        }

}

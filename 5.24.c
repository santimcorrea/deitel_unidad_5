#include <stdio.h>

/*
5.24
function celsius to fahrenheit and otherwise.
*/

float celsius(float a);
float fahrenheit(float a);

int main(void)
{
    int opcion = 0;

    while ( !(opcion == 1 || opcion == 2))
    {
        printf("insert 1 to see celcius to fahrenheit\n");
        printf("insert 2 to see fahrenheit to celcius\n");
        scanf("%d", &opcion);

        if ( opcion == 1)
        {
            for( int i = 0; i <= 100; i++)
            {
                printf( "%d grados Celsius \t\t %.1f grados fahrenheit\n", i, fahrenheit(i));
            }
        }
        else if( opcion == 2)
        {
            for( int i = 32; i <= 212; i++)
            {
                printf( "%d grados fahrenheit \t\t %.1f grados Celsius\n", i, celsius(i));
            }
        }
    }

}


float celsius(float a){
        float resultado = ( ( a - 32) * 5 ) / 9;
        return resultado;
}

float fahrenheit(float a){
        float resultado = ( ( a * 9) / 5 ) + 32;
        return resultado;
}

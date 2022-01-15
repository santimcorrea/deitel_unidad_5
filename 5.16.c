#include <stdio.h>
#define EXPONENTE 4
#define BASE 3


/*
escriba una función potenciaInt( base, exponente) que devuelva el valor de:
base elevado al exponente
exponente es distinto de cero y base es un entero. no se pueden usar bibliotecas de matematicas y controlado por un for loop
*/


//prototipo de la función
int potenciaInt(int a, int b);

int main(void)
{
        int resultado = potenciaInt( BASE, EXPONENTE);
        printf("The result of %d raised to the %d is: %d\n", BASE, EXPONENTE, resultado);
        return 0;
}

int potenciaInt(int a, int b){

        int resultado = a;

        if( b != 0)
        {
                for( int i = 1; i < b; i++){
                        resultado = resultado * a;
                }
        }
        else
        {
                resultado = 1;
        }

        return resultado;
}

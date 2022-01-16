#include <stdio.h>
#define BASE 2
#define EXPONENTE 3



/*
5.37
*/

//prototipo de la función
int potenciaInt(int a, int b);

int main(void)
{
        int resultado = potenciaInt( BASE, EXPONENTE);
        printf("The result of %d raised to the %d is: %d\n", BASE, EXPONENTE, resultado);
        return 0;
}

// recursive function
int potenciaInt(int a, int b){

        int resultado = 1;

        if(b != 1)
        {
            int resultado = ( a * ( potenciaInt(a, (b-1))));
        }
        else{
            return resultado * a;
        }

}

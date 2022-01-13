#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
para cada uno de los siguientes conjuntos de enteros, escriba una instrucción individual que imprima un número aleatorio
de los conjuntos.

a) 2, 4, 6, 8, 10
b) 3, 5, 7, 9, 11
c) 6, 10, 14, 18, 22
*/

int main(void)
{
        // inicializo variables y arrays
        int opcion;
        int x[5] = { 2, 4, 6, 8, 10 };
        int y[5] = { 3, 5, 7, 9, 11 };
        int w[5] = { 6, 10, 14, 18, 22 };

        // busco un numero al azar entre 0 y 4
        srand( time( NULL ) );
        int numero = rand() % 5;

        // menu de eleccion de array
        printf("ingresa 1 para elegir un numero entre 2, 4, 6, 8, 10\n");
        printf("ingresa 2 para elegir un numero entre 3, 5, 7, 9, 11\n");
        printf("ingresa 3 para elegir un numero entre 6, 10, 14, 18, 22\n");
        scanf("%d", &opcion);
        while( !( opcion == 1 || opcion == 2 || opcion == 3) )
        {
            printf("ingresa 1 para elegir un numero entre 2, 4, 6, 8, 10\n");
            printf("ingresa 2 para elegir un numero entre 3, 5, 7, 9, 11\n");
            printf("ingresa 3 para elegir un numero entre 6, 10, 14, 18, 22\n");
            scanf("%d", &opcion);
        }

        // imprime un elemento del array elegido
        if(opcion == 1)
            printf("el numero otorgado al azar del array %d es el numero %d\n",opcion, x[numero]);
        if(opcion == 2)
            printf("el numero otorgado al azar del array %d es el numero %d\n",opcion, y[numero]);
        if(opcion == 3)
            printf("el numero otorgado al azar del array %d es el numero %d\n",opcion, w[numero]);

        return 0;
}

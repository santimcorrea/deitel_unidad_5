#include <stdio.h>


#define CANTIDAD 1000
/*
5.35
*/
char playing(int number, int eleccion);

int main(void)
{

        int opcion = 1;

        while(opcion == 1)
        {
            // the program choose a random number
            srand(time(NULL));
            int number = (1 + rand() % CANTIDAD);
            int eleccion;

            // start the game
            printf("I chose a number between 1 and %d\n", CANTIDAD);
            printf("Can you guess which one is?\n");
            printf("Please, type your answer\n");
            scanf("%d", &eleccion);

            // recursive function to say if the chosen number is the correct number, lower or higher
            playing(number, eleccion);
            printf("Do you want to play again? \t(type 1 to answer \"yes\" or other number to answer \"no\")\n");
            scanf("%d", &opcion);
        }


}

// I applied recursive for this function
char playing(int number, int eleccion)
{
        if( number == eleccion)
            printf("Excelent! You have guess the number\n\n");
        else
        {
            if( number < eleccion)
            {
                printf("Lower\n");
                printf("Please, type your new answer\n");
                scanf("%d", &eleccion);
                playing(number, eleccion);
            }
            else if( number > eleccion)
            {
                printf("Higher\n");
                printf("Please, type your new answer\n");
                scanf("%d", &eleccion);
                playing(number, eleccion);
            }
            else
                printf("Excelent! You have guess the number\n\n");
        }
}

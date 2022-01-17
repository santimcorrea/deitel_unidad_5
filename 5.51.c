#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
5.51
Craps with bets by Santiago Martín Correa
*/

enum status { CONTINUA, GANA, PIERDE};

int rollDices(void);
int play( void );

int main(void)
{
        // initial money to bet
        int saldoBanco = 1000;

        while( saldoBanco > 0 )
        {
            int apuesta, resultado;

            // take your bet
            printf("El saldo actual es de: %d\n", saldoBanco);
            printf("Cuanto queres apostar?\n");
            scanf("%d", &apuesta);

            // check if you have money to bet
            if ( apuesta > saldoBanco ) // if yo do not have
            {
                printf("Saldo insuficiente!\nCuanto queres apostar?\n");
                scanf( "%d", &apuesta);
            }
            else       // if you have money, then play
            {
                resultado = play();
            }


            if ( resultado == 1) // if you win
            {
                saldoBanco += apuesta;
            }
            else // if you lose
            {
                saldoBanco -= apuesta;
            }

        }

        // game ends
        printf ( "Lo siento. Su saldo se agoto!\n");

        return 0;

}


// rollDices functions that returns a random sum of the 2 dices
int rollDices( void )
{
        int dado1;
        int dado2;
        int sumaTemp;

        dado1= 1 + ( rand() % 6 );
        dado2= 1 + ( rand() % 6 );
        sumaTemp = dado1 + dado2;

        printf( "el jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);

        return sumaTemp;
}


// play function. It has inside the terms of the game, and it use the rollDices function
int play( void )
{
        int suma;
        int miPunto;

        enum status estatusJuego;

        srand( time(NULL) );
        suma = rollDices();

        // which status takes if wins, tie or lose
        switch( suma )
        {       
                // win
                case 7:
                case 11:
                        estatusJuego = GANA;
                        break;
                // lose
                case 2:
                case 3:
                case 12:
                        estatusJuego = PIERDE;
                        break;
                // not win or lose
                default:
                        estatusJuego = CONTINUA;
                        miPunto = suma;
                        printf( "Su punto es %d\n", miPunto );
                        break;
        }

        while( estatusJuego == CONTINUA ) // looking for the number
        {
                suma = rollDices();

                if( suma == miPunto )
                {
                        estatusJuego = GANA;
                }
                else
                {
                        if ( suma == 7 )
                        {
                                estatusJuego = PIERDE;
                        }
                }
        }

        // printf if player win or lost
        if ( estatusJuego == GANA )
        {
                printf("El jugador GANO\n\n"); // win
                return 1;
        }
        else
        {
                printf("el jugador PERDIO\n\n"); // lose
                return 0;

        }
}

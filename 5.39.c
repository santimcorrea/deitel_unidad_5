#include <stdio.h>

/*
5.39
Hanoi function
*/


int hanoi( int numToMove, int poleFrom, int poleTo, int poleTemp);

int main(void)
{
    int i;
    printf("how many discs do you want to move from pole 1 to  pole 3?\n");
    scanf("%d", &i);

    // hanoi function
    hanoi(i, 1, 3, 2);  //  (   numberToMove = ? | poleFrom = 1 | poleTo = 3 | poleTemp = 2   )
}


int hanoi( int numToMove, int poleFrom, int poleTo, int poleTemp)
{
        if( numToMove > 1)
        {
                // move n-1 discs from pole 1 to pole 2 and use pole 3 as temporary
                hanoi( numToMove - 1, poleFrom, poleTemp, poleTo);
                // move last dist from pole 1 to pole 3
                printf("El disco %d se mueve del asta %d -> %d\n", numToMove, poleFrom, poleTo);
                // move n-1 discs from pole 2 to pole 3 and use pole 1 as temporary
                hanoi( numToMove - 1, poleTemp, poleTo, poleFrom);
        }
        else if( numToMove == 1)        // Base case
        {
                // move the last disc from the pole it is to pole 3
                printf("El disco %d se mueve del asta %d -> %d\n", numToMove, poleFrom, poleTo);
        }
}

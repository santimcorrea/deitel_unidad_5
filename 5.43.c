#include <stdio.h>

/*
5.43

// recursive of main

*/

int main(void)
{
        static int cuenta = 0;
        cuenta++;
        printf("cuenta: %d\n", cuenta);
        main();

}

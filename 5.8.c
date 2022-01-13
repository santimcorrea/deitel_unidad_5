#include <stdio.h>
#include <math.h>

/*
muestre el valor de x después de que se realice cada una de las siguientes instrucciones
fabs(7.5)
floor(7.5)
fabs(0.0)
ceil(0.0)
fabs(-6.4)
ceil(-6.4)
ceil(  -fabs( -8 + floor( -5.5 ) ) )
*/

int main(void)
{
        double x = 0;

        // fabs muestra el valor absoluto
        x = fabs(7.584646);
        printf("fabs(7.584646) muestra: %lf\n", x);

        x = fabs(0.5);
        printf("fabs(0.5) muestra: %lf\n", x);

        // floor muestra el entero proximo inferior
        x = floor(7.7);
        printf("floor(7.7) muestra: %lf\n", x);

        // ceil muestra el entero proximo superior
        x = ceil(0.3);
        printf("ceil(0.3) muestra: %lf\n", x);

        x = fabs(-6.4);
        printf("fabs(-6.4) muestra: %lf\n", x);

        x = ceil(-6.4);
        printf("ceil(-6.4) muestra: %lf\n", x);

        x = ceil(  -fabs( -8 + floor( -5.5 ) ) );
        printf("ceil(  -fabs( -8 + floor( -5.5 ) ) ) muestra: %lf\n", x);

        return 0;

}

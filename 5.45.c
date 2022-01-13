#include <stdio.h>
#include <math.h>

/*
5.45
Escriba una función distancia que calcule la distancia entre dos puntos (x1, y2) y (x2, y2).
Todos los números y los valores de retorno deben ser de tipo double

*/

double medirDistancia( double x1, double y1, double x2, double y2);

int main(void)
{
        // inicializo variables
        double x1=0, x2=0, y1=0, y2=0, distancia=0;

        // ingreso los datos
        printf( "introduzca primer punto: primero el valor para x y luego el valor para y)\n");
        scanf( "%lf%lf", &x1, &y1);
        printf( "introduzca segundo punto: primero el valor para x y luego el valor para y)\n");
        scanf( "%lf%lf", &x2, &y2);

        // llamo a la función
        distancia = medirDistancia( x1, y1, x2, y2);

        // muestro el punto
        printf( "%s%f, %f) %s %f, %f %s: %f",
        "La distancia entre el punto (", x1, y1, " y el punto (", x2, y2, "es :", distancia);

}

double medirDistancia( double x1, double y1, double x2, double y2){

        double resultado = sqrt(  pow((x2 - x1), 2)    +    pow((y2 - y1), 2)    );
        return resultado;
}

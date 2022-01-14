#include <stdio.h>
#include <math.h>

                // made by Santiago Correa and Tomas Codina Copyright

/*

Un estacionamineto cobra la cuota minima de $2.00 por las tres primeras horas de estacionamiento. El estacionamiento
cobra $0.50 adicional por hora o faccion despues del tiempo minimo. El cobro maximo para cualquier periodo
de 24 horas es de $10.00. Suponga que ningun automovil se estaciona por mas de 24 horas, al mismo timepo que otro.
Escriba un programa que calcule e imprima los cobros por cada uno de los tres clientes que se estacionaron ayer
en el estacionamiento. Debe introducir el numero de horas que cada cliente paso estacionado ahi. Su programa
debe imprimir los resultados en una forma tabular, y debe calcular e imprimir los recibos de las percepciones
de ayer. El programa debe utilizar la funcion calculaImporte para determinar el importe de cada cliente. Sus salidas
deben ser semejantes al formato siguiente:

automovil   horas   importe
1           1.5     2.00
2           4.0     2.50
3          24.0    10.00

total 29.5 horas importe 14.50

*/

void calculeImporte(double importes[], int cantidadHoras, unsigned i);


int main(void)
{
    int cantidadVehiculos = 0;

    printf("Cuantos vehiculos se estacionaron?\n");
    scanf("%u", &cantidadVehiculos);

    double horas[cantidadVehiculos];
    double importes[cantidadVehiculos];


    for (unsigned i = 1; i <= cantidadVehiculos; i++)
    {
        horas[i] = 0.00; importes[i] = 0.00;
        printf("Ingrese cantidad de horas que estuvo el vehiculo numero %u\n", i);
        float cantidadHoras;
        scanf("%f", &cantidadHoras);
        horas[i-1] = cantidadHoras;

        int cantidadhoras = cantidadHoras;
        calculeImporte( importes, cantidadhoras, i);
    }


    // imprimo la tabla
    printf("\nAutomovil\t\tHoras\t\t\tImporte\n");
    double sumaHoras = 0; double sumaImportes = 0;
    for (unsigned i = 1; i <= cantidadVehiculos; i++)
    {
        printf("%u\t\t\t%.2lf\t\t\t%.2lf\n", i, horas[i-1], importes[i-1]);
        sumaHoras += horas[i-1];
        sumaImportes += importes[i-1];
    }
    printf("\nTotal:\t\t\t%.2f\t\t\t%.2f\n", sumaHoras, sumaImportes);

}



void calculeImporte(double importes[], int cantidadHoras, unsigned i)
{
    if( cantidadHoras <= 3)
    {
        importes[i-1] = 2.00;
    }
    else if( cantidadHoras > 19.99)
    {
        importes[i-1] = 10.00;
    }
    else
    {
        float multiplicar = cantidadHoras - 3;
        importes[i-1] = (multiplicar * 0.5) + 2.00;
    }
}

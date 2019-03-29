#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad1;
    int edad2;
    float promedio;

    printf("Ingrese edad: ");
    scanf ("%d", &edad1);

    printf("Ingrese edad: ");
    scanf ("%d", &edad2);

    promedio = (edad1 + edad2)/2;

    printf ("Las edades son: %d y %d", edad1, edad2);
    printf ("\nEl promedio de las edades es: %.2f", promedio);

    return 0;
}

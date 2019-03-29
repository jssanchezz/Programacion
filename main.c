#include <stdio.h>
#include <stdlib.h>

int main()
{
    float edad1, edad2, promedio;

    char nombre[30];

    char genero;

    printf ("Por favor ingrese su nombre: ");
    scanf ("%s", nombre);

    printf("Ingrese su genero: (m/f) ");
    fflush(stdin);
    scanf("%c", &genero);

    //printf("Genero: ", genero);

    if(genero == 'f')
    {
        printf("Genero: Femenino.");
    }
    else{
            printf("Genero: masculino.");
    }

    /*printf ("El nombre es: %s",nombre );

    printf("Ingrese edad: ");
    scanf ("%f", &edad1);

    printf("Ingrese edad: ");
    scanf ("%f", &edad2);

    promedio = (edad1 + edad2)/2;

    printf ("Las edades son: %.0f y %.0f", edad1, edad2);
    printf ("\nEl promedio de las edades es: %.2f", promedio);*/

    return 0;
}

/*Escribir en lenguaje C un programa que:
1) Pida por teclado dos numeros (datos enteros) y sean almacenados en dos variables, llamadas v1 y v2.
2) Intercambie los valores de las variables.
3) Muestre por pantalla los valores contenidos en las variables.*/

#include <stdio.h>

void main()
{
    int v1, v2, aux;
    printf("Introduzca dos numeros (enteros) \n");

    printf("Introducir primer numero \n");
    scanf("%i", &v1);

    printf("Introducir segundo numero \n");
    scanf("%i", &v2);

    aux = v1;
    v1 = v2;
    v2 = aux;

    printf("%i \n", v1);
    printf("%i \n", v2);
}
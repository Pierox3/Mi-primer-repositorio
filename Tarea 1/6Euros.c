/*Escribir en lenguaje C un programa que: 
1) Pida por teclado una cantidad (dato entero) en dolares.
2) Calcule su equivalente en euros.
3) Muestre por pantalla el resultado (dato real).
NOTA: 1 Euro = 166.386 dolares.*/

#include <stdio.h>

void main()
{
    int dolares; 
    float euros;
    printf("Pasar de dolares a euros \n");

    printf("Introducir cantidad de dolares \n");
    scanf("%i", &dolares);

    euros = dolares / 166386;

    printf("%i de dolares es equivalente a %f euros", dolares, euros);
}
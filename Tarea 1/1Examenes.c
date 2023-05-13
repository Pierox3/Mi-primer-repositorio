/*Escribir en lenguaje C un programa que:
1) Pida por teclado la nota de 3 examenes (datos reales)
2) Calcule la nota media de los tres examenes 
3) Muestre por pantalla el resultado (dato real)*/

#include <stdio.h>
void main()
{
    float examen1, examen2, examen3, prom;
    printf("Promedio de examenes \n");

    printf("Inserte la primera nota: \n");
    scanf("%f", &examen1);

    printf("Inserte la segunda nota: \n");
    scanf("%f", &examen2);

    printf("Inserte la tercera nota: \n");
    scanf("%f", &examen3);

    prom = (examen1 + examen2 + examen3)/3; 

    printf("El promedio de los examenes es %f", prom);
}
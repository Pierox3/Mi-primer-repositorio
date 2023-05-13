/*Escribir en lenguaje C un programa que:
1) Pida por teclado una hora en horas, minutos y segundos (datos enteros)
2) Calcule cuantos segundos han pasado desde las 0:0:0 horas
3) Muestre por pantalla el resultado (dato entero)*/

#include <stdio.h>

void main()
{
    int horas, mins, segs;
    printf("Cuantos segundos han pasado desde las 0:0:0 horas \n");

    printf("Introduzca cantidad de horas \n");
    scanf("%i", &horas);

    printf("Introduzca cantidad de minutos \n");
    scanf("%i", &mins);

    printf("Introduzca cantidad de segundos \n");
    scanf("%i", &segs);

    segs = (((horas * 3600) + (mins * 60)) + segs);
    
    printf("Han pasado %i segundos", segs);
}
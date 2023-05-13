/*Suponiendo que el kilo de azucar y de cafe estan a 3$ y 0.75$ respectivamente, escribir en lenguaje C un
un programa que:
-1) Pida por teclado una cantidad (dato real) en dolares.
-2) Si la mitad de la cantidad introducida se destina a comprar azucar, una tercera parte a comprar cafe, y
el resto no se gasta. Calcule cuantos kilos de azucar y cafe (datos reales) se pueden comprar con dicha 
cantidad de dinero, asi como la cantidad (dato real) de dinero sobrante.
-3) Muestre por pantalla los resultados (dato real)*/

#include <stdio.h>

void main()
{
    float dolares, mitad, tp, kazucar, kcafe, resto;
    
    printf("Introducir una cantidad de dolares \n");
    scanf("%f", &dolares);

    mitad = dolares / 2;
    tp = dolares / 3;
    resto = dolares - (mitad + tp);

    kazucar = mitad / 3;
    kcafe = tp / 0.75;

    printf("Se pueden comprar %f kilos de azucar \n", kazucar);
    printf("Se pueden comprar %f kilos de cafe \n", kcafe);

    resto = dolares - (mitad + tp);
    printf("La cantidad sobrante es de %f dolares \n", resto);
}
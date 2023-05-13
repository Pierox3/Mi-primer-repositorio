/*Escribir en lenguaje C un programa que:
1) Pida por teclado tres numeros (datos enteros).
2) Muestre el mayor de los tres numeros introducidos.*/

#include <stdio.h>

void main()
{
    int n1, n2, n3;
    printf("El mayor de los numeros \n");

    printf("Inserte el primer numero \n");
    scanf("%i", &n1);

    printf("Inserte el segundo numero \n");
    scanf("%i", &n2);

    printf("Inserte el tercer numero \n");
    scanf("%i", &n3);

    if(n1 > n2 && n1 > n3){
        printf("El numero mayor es %i \n", n1);
    }
    else if(n2 > n1 && n2 > n3){
        printf("El numero mayor es %i \n", n2);
    }
    else if(n3 > n1 && n3 > n2){
        printf("El numero mayor es %i \n", n3);
    }
    else{
        printf("Los tres numeros son iguales");
    }
}
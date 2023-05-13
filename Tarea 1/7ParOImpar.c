/*Escribir en lenguaje C un programa que:
1) Pida por teclado un numero (dato entero).
2) Muestre por pantalla:
-ES PAR, en el caso de que el numero sea divisible entre 2.
-ES IMPAR, en el caso de que el numero no sea divisible entre 2.*/

#include <stdio.h>

void main()
{
    int num;
    printf("¿El numero es Par o Impar? \n");

    printf("Introduzca un numero \n");
    scanf("%i", &num);

    if((num % 2)==0){
        printf("El numero es PAR \n");
    }
    else{
        printf("El numero es IMPAR \n");
    }
}
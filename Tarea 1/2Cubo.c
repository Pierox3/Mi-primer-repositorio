/*Escribir en lenguaje C un programa que:
-1) Pida por teclado la arista (dato real) de un cubo.
-2) Calcule el volumen del cubo.
-3) Muestre por pantalla el resultado (dato real)*/

#include <stdio.h>

void main()
{
   float  arista, volumen;
   printf("Volumen de un cubo \n");

   printf("Introdusca valor de arista de un cubo \n");
   scanf("%f", &arista);

   volumen = arista * arista * arista;

   printf("El volumen del cubo es %f", volumen);
}
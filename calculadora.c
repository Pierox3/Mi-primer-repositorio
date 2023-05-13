#include <stdio.h>

void operaciones(float a, float b);
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main(){
    int x, y;

    operaciones(x, y);
    
    system("pause");
    return 0;
}

void operaciones(float a, float b){
    int o;
    float res;

    printf("Introduzca el primer numero: ");
    scanf("%f", &a);
    printf("Introduzca el segundo numero: ");
    scanf("%f", &b);

    printf("Introduzca un valor para indicar la operacion \n");
    printf("1 = suma / 2 = resta / 3 = multiplicacion / 4 = division \n");
    scanf("%i", &o);
    switch(o){
        case 1: 
        res = suma(a, b);
        printf("El resultado es %f \n\n", res);break;
        case 2:
        res = resta(a, b);
        printf("El resultado es %f \n\n", res);break;
        case 3:
        res = multiplicacion(a, b);
        printf("El resultado es %f \n\n", res);break;
        case 4:
        res = division(a, b);
        if(b != 0){
            printf("El resultado es %f \n\n", res);
        }else{
            printf("ERROR: NO se puede dividir entre 0 \n\n");
        }break;
        default:
        printf("El valor ingresado NO esta vinculado a ninguna operacion \n\n");break;
    }
}

float suma(float a, float b){
    float suma;

    suma = a + b;

    return suma;
}
float resta(float a, float b){
    float resta;

    resta = a - b;

    return resta;
}
float multiplicacion(float a, float b){
    float multi;

    multi = a * b;

    return multi;
}
float division(float a, float b){
    float div;

    div = a / b;

    return div;
}
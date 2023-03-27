/*Andrés Crespo C.I 31.259.533
Piero Di Eugenio C.I 31.083.043

Desarrolle un programa en c que permita registrar las citas medicas de la clinica ABC, de n cantidad de
pacientes permitiendo mostrar por pantalla:
1-Cantidad de pacientes femeninos.
2-Cantidad de pacientes masculinos.
3-Cantidad de pacientes mayores de edad.
4-Cantidad de pacientes menores de edad.
Y que ademas permita validar las fechas de nacimiento de cada paciente y los pacientes que tengan cuya cedula
de identidad termine en un numero par y sean del sexo femenino tengan un descuento del 15% sobre el costo de 
la consulta, y los pacientes masculinos de una edad mayor de 60 años tendran un descuento de 30%.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int citas=0, dia, mes, ano, dd, mm, aaaa, i, cfem=0, cmasc=0, cmayor=0, cmenor=0, edad, descontfem=0, descontmasc=0, cedula, sindes;
    char nombre[20];
    char costcitafemi[]= "Pagando el costo con descuento Bs.";
    char costcitamascu[]= "Pagando el costo con descuento Bs.";
    char masc, fem;
    float costo, costcitafem=0, costcitamasc=0;

    printf("Ingresar cantidad de citas: \n");
    scanf("%d", &citas);
    printf("Ingresar costo de las citas: \n");
    scanf("%f", &costo);
    printf("Ingresar fecha actual: \n");
    scanf("%d/%d/%d", &dia,&mes,&ano);
    for(i=1; i<=citas; i++){
        printf("Escribir nombre del paciente: \n" );
        scanf("%s", nombre);
        printf("Ingresar fecha de nacimiento del paciente (dd/mm/aaaa): \n");
        scanf("%d/%d/%d", &dd, &mm, &aaaa);
        printf("\n" "Ingrese una M si es Masculino, ");
        scanf("%c", &masc);
        printf("o una F si es Femenino: ");
        scanf("%c", &fem);
        if(fem=='M' || fem=='m'){
            cmasc++;
        }
        if(fem=='F' || fem=='f'){
            cfem++;
        } 
        if(mm>mes){
            edad = (ano - aaaa) - 1;
        }
        else if(mm<=mes){
            edad = ano - aaaa;
        }
        if(edad<18){
            cmenor++;
        }
        else if(edad>=18){
            cmayor++;
        }
        printf("Ingresar nro de cedula del paciente (sin poner puntos): \n");
        scanf("%d", &cedula);
        if((cedula%2==0 && (fem=='F' || fem=='f'))){
            costcitafem = costo - (costo*0.15);
            descontfem++;
        }
        if(((masc=='M' || masc=='m') && edad>=60)){
            costcitamasc = costo - (costo*0.30);
            descontmasc++;
        }
        sindes = (cmasc + cfem) - (descontfem + descontmasc);
    }
    printf("\n" "La cantidad de pacientes Femeninos es: %d", cfem);
    printf(" \n" "La cantidad de pacientes Masculinos es: %d", cmasc);
    printf(" \n" "La cantidad de pacientes Mayores de edad es: %d", cmayor);
    printf(" \n" "La cantidad de pacientes Menores de edad es: %d", cmenor);
    printf(" \n" "La cantidad de pacientes Femeninos que van a tener descuento en la consulta es: %d", descontfem);
    printf("." " "  "%s", costcitafemi); printf(" " "%f", costcitafem);
    printf(" \n" "La cantidad de pacientes Masculinos que van a tener descuento en la consulta es: %d", descontmasc);
    printf("." " " "%s", costcitamascu); printf(" " "%f", costcitamasc);
    printf(" \n" "La cantidad de pacientes que no tendran descuento en la consulta es: %d",sindes);
    printf("." "Pagando el costo normal Bs %f", costo);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define max 1000

typedef int vec_n[3];

struct estudiantes{
    char nombre[100];
    vec_n notas;
}est;

struct estudiantes v_est[max];
float v_prom[5];

void introduce (int m[][3]);
void escribir(int matriz[][3]);
void promedio(int matriz[][3]);
void guardar(int matriz[][3]);
int m[3][3];

int main(){

    introduce(m);
    escribir(m);
    promedio(m);
    guardar(m);
    
    system("pause");
    return 0;
}

void introduce(int matriz[][3]){  //Leer matriz
    int i, j;

    for(i = 0; i < 3; i++){
        printf("%s: ", v_est[i].nombre);
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } 
}

void escribir(int matriz[][3]){ //Llenar matriz
    FILE *f; 
    f = fopen("notas_alumnos.txt", "r");
    int i=0;
    
    while(!feof(f)){
        fscanf(f, "%s" "%d" "%d" "%d", v_est[i].nombre, &v_est[i].notas[0], &v_est[i].notas[1], &v_est[i].notas[2]);
        i++;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = v_est[i].notas[j];
        } 
    }   
    introduce(m);
    fclose(f);
}

void promedio(int matriz[][3]){ //Calcula el promedio
    int i, j;
    for(i = 0; i < 3; i++){
        int acum=0;
        float prom=0;
        for(j = 0; j < 3; j++){
            acum += matriz[i][j];
        }
        prom = acum / 3;
        v_prom[i] = prom;
        printf("El promedio de %s es %g \n", v_est[i].nombre, prom);
    }
}

void guardar(int matriz[][3]){ //guardar
    int i=0;
    FILE *f;
    f = fopen("resultados.txt", "w");
    for(int i =0 ; i < 3; i++){
        if(!feof(f)){
            fprintf(f, "%s: %g\n", v_est[i].nombre, v_prom[i]);
        }
    }
    fclose(f);
}
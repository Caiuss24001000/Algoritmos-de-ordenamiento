#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "seleccion.h"
#include <time.h>
#include <sys/time.h>

int main(){

    int  *p, numeroDeDatos = 0;

    FILE *fp = fopen("numeros10millones.txt", "r");
    if(fp == NULL){
        printf("No se encuentra el archivo\n");
        exit(0);
    }else {
        printf("Archivo encontrado\n");
        
        while(numeroDeDatos<1 || numeroDeDatos>TAM_MAX){
            printf("Ingrese cuantos numeros deseas ordenar(maximo 10,000,000)\n");
            fflush(stdin);
            scanf("%d", &numeroDeDatos);
        }

        clock_t tr = clock(); //inicio

        p=(int *)malloc(sizeof(int)*numeroDeDatos);

        car_dat(p, numeroDeDatos , fp);
        
        clock_t t = clock();
        fSeleccion(p, numeroDeDatos);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;

        tr = clock() - tr;

        double timeR_taken = ((double)tr)/CLOCKS_PER_SEC;
        printf("El programa tardo %f segundos en ordenar los numeros. \n", time_taken);
        printf("El programa tardo %f segundos en terminar\n", timeR_taken);
    }

    fclose(fp);
    free(p);
    
    return 0;
}


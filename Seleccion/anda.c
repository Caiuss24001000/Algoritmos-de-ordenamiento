#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "seleccion.h"

int main(){

    int  *p, tam_arr = 5;
    
    p=(int *)malloc(sizeof(int)*tam_arr);
    FILE *fp = fopen("numeros10millones.txt", "r");

    if(fp == NULL){
        printf("No se encuentra el archivo\n");
    }
    else {
        printf("Archivo encontrado\n");
        car_dat(p, tam_arr , fp);
        fSeleccion(p, tam_arr);
        imp_arr(p, tam_arr);
    }

    fclose(fp);
    free(p);
    system("PAUSE");

    return 0;
}


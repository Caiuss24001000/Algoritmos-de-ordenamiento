#include <stdio.h>
#include "seleccion.h"

/*FUNCIONES*/
void fSeleccion(int A[], int n){
    int p, temp;
    for (int k = 0; k < n-1; ++k){
        p=k;
        for (int i = k+1; i < n; ++i){
            if(A[i]<A[p])
                p=i;
        }
        if (k!=p){
            temp = A[p];
            A[p] = A[k];
            A[k] = temp;
        }
        
        //printf("Iteracion %d\n", k+1);
    }
    return;
}

void car_dat(int a[], int n, FILE *fp){

    for(int i=0; i<n; i++){
        fscanf(fp, "%d", &a[i]);
        //printf("Cargando datos: %d de %d\n", i+1, n);
        fflush(stdout);
    }
}

void imp_arr(int a[], int tam_arr){
    printf("{");

    for (int i = 0; i < tam_arr; ++i){
        printf(" %d ", a[i]);
    }

    printf("}\n");
}

void llenar_arr(int a[], int tam){
    srand(time(0));
    for (int i = 0; i < tam; ++i)
    {
        a[i] = 1+rand()%TAM_MAX+1;  //Genera datos entre 1 y 10000001
        printf("Dato agregado al arreglo: %d\n", a[i]);
    }
    return;
}
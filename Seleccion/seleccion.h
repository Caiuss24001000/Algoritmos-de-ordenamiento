#include <stdlib.h>
#include <time.h>

#ifndef SELECCION_H
#define SELECCION_H

#define TAM_MAX 10000000            //Tamaño maximo de nuestros datos

/*DECLARACION DE FUNCIONES*/
void fSeleccion(int [], int);       //Funcion para ordenar por seleccion 
void car_dat(int [], int , FILE *); //Funcion que carga los datos al arreglo
void imp_arr(int [], int);          //Funcion que imprime un arreglo
void llenar_arr(int [], int);       //Funcion que llena un arreglo


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
        
        printf("Iteracion %d\n", k+1);
    }
    return;
}

void car_dat(int a[], int n, FILE *fp){

    for(int i=0; i<n; i++){
        fscanf(fp, "%d", &a[i]);
        printf("Cargando datos: %d de %d\n", i+1, n);
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
/*
void fSeleccion(pNodo c, int n){
    int p, temp;
    pNodo aux1, aux2, aux3, aux4;
    
    aux1 = aux4 = c;//p=k, k=0
    for (int k = 0; k < n-1; ++k){

        //p=k;//
        aux2 = aux1->sig; //i=k+1
        for (int i = k+1; i < n; ++i){

            if(aux2->dato<aux1->dato)//A[i]<A[p]
                aux1=aux2; //p=i;
        }
        aux2 = aux2->sig;
        if (k!=p)
        {
            aux3->dato = aux1->dato; //temp = A[p];
            aux1->dato = aux4->dato; //A[p] = A[k];
            aux4->dato = aux3->dato; //A[k] = temp;
        }
        
    }
    aux1 = aux1->sig;
    aux4 = aux4->sig;
    
    return;
}

void llenar_col(int n){
    int add;
    srand(time(0));
    for (int i = 0; i < n; ++i)
    {
        add = 1+rand()%1000;
        insCola(add);
        printf("Dato agregado al arreglo: %d\n", add);
    }
    return;
}

*/


#endif
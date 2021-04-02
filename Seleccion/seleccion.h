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
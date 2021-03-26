#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <time.h>
/*DECLARACION DE FUNCIONES*/
//Funcion que llena un arreglo
void llenar_arr(int [], int);
//Funcion para ordenar por seleccion 
void fSeleccion(int [], int);	//n es el tamaño del arreglo 


int main(){
	
	int tam_arr;
	tam_arr = 15;
	//int a[]={1,8,7,5,43,34,23,26,65,652,245,516,166,114,571};
	int a[tam_arr];//='\0';
	llenar_arr(a, tam_arr);

	
	fSeleccion(a, tam_arr);

	for (int i = 0; i < tam_arr; ++i)
	{
		printf("Ordenando %d\n", a[i]);
	}

	return 0;
}

/*FUNCIONES*/
void llenar_arr(int a[], int tam){
	srand(time(0));
	for (int i = 0; i < tam; ++i)
	{
		a[i] = rand()%100;
		printf("Dato agregado al arreglo: %d\n", a[i]);
	}
	return;
}

void fSeleccion(int A[], int n){
	int p, temp;
	for (int k = 0; k < n-1; ++k)
	{
		p=k;
		for (int i = k+1; i < n; ++i)
		{
			if(A[i]<A[p])
				p=i;
		}
		temp = A[p];
		A[p] = A[k];
		A[k] = temp;
	}
	return;
}

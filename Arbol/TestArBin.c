#include <stdio.h>
#include <stdlib.h>
#include "Elem.h"
#include "DicBin.h"


int main(){

	int i,b;
	printf("ingrese el numero de prueba:  ");
	scanf("%d",&b);
	clock_t t= clock();	
	ArBin h = vacio();//Declaramos e inicializamos nuestro Arbol vacio
	h=Orden(h,b);
	t=clock()-t;
	double timeR_taken=((double)t)/CLOCKS_PER_SEC;
	printf("\nvalor de tiempo real:  %f",timeR_taken);	
	InOrd(h);
	return 0;
}


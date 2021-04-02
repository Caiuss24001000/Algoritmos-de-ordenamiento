#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

void LlenandoArreglo(int *a, int k){        
    char nom[]="numeros10millones.txt",r[15];
	FILE *archivo;
	archivo=fopen(nom,"r");
	printf("\ninicia la secuencia:  \n\n");
		for(int x=0;x<k;x++){
			fgets(r,15,archivo);
			if(feof(archivo))
				break;
			a[x]=(int) strtol(r, NULL,10);
		}
	fclose(archivo);
    printf("Llenado del arreglo: Finalizado");
}

void Impresion(int *a, int n){
    printf("Despues del ordenamiento:\n");
    for (int i = 0; i < n; i++)
        printf("%d  \n", a[i]);

    printf("Programa finalizado . . .");
}

void Insercion(int *a, int n){
    int temp, j;                    //temp es nuestra caja de intercambio y j un contador.

    for (int i = 0; i < n; i++){
        j = i;                      //j tendra el mismo valor que i segun la iteracion en la que se encuentre el programa.
        temp = a[i];                //Asignamos a temp nuestro valor en el arreglo segun el contador.
        while (j > 0 && temp<a[j-1]){   //
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }

    //Impresion(a, n);
    free(a);

}

void CreandoArreglo(){          //Esta funcion se encarga de crear el arreglo segun n entradas. Dadas por el usuario
    int *a;
	int k = 0;
	printf("Ingrese el numero de prueba:  ");
	scanf("%d",&k);
    clock_t r= clock();

	a = (int *) calloc(k, sizeof(int));     //Definicion del puntero dinamico

    LlenandoArreglo(a, k);                  //Invocacndo a LlenandoArreglo
    clock_t t= clock();
    Insercion(a, k);   
    t=clock()-t;//finaliza el conteo
    r=clock()-r;
    double timeR_taken=((double)r)/CLOCKS_PER_SEC;
    double time_taken=((double)t)/CLOCKS_PER_SEC;

    printf("\nvalor de tiempo real:  %f\n",timeR_taken);
    printf("\nvalor de tiempo CPU:  %f\n",time_taken);
}


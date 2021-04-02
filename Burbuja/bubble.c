#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <sys/time.h>

#define MAX 10000000

int data[MAX];

int main(){
	int buff, n;
	FILE *fp = fopen("numeros10millones.txt", "r");
	FILE *fw = fopen("numerosOrdenados.txt", "w");
	if(fp == NULL){
		printf("Error al leer el archivo\n");
		exit (0);
	}
	else {
		printf("Archivo leido con exito.\n");
	}
	
	while(1){
		printf("\rInserte el numero de datos que desea leer y ordenar: ");
		fflush(stdout);
		scanf("%d", &n);
		if(n<1 || n>10000000){
			printf("NUMERO NO VALIDO");
			system("pause");
		}
		else break;
	}
	
	clock_t tr = clock();
	for(int i=0; i<n; i++){
		fscanf(fp, "%d", &data[i]);
		//printf("\rLeyendo datos - Progreso: %.2f%%", (float)i/n*100.0);
		//fflush(stdout);
	}
	printf("\n");
	/*for(int i=0; i<MAX; i++){
		printf("Dato no. %d: %d\n", i+1, data[i]);
	}*/
	clock_t t = clock();
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(data[j] > data[j+1]){
				buff = data[j];
				data[j] = data[j+1];
				data[j+1] = buff;
			}
		}
		//printf("\rOrdenando datos - Progreso: %.2f%%", (float)i/n*100.0);
		//fflush(stdout);
	}
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("\n");
	for(int i=0;i<n;i++){
		//printf("\rGenerando archivo - Progreso: %.2f%%", (float)i/n*100.0);
		//fflush(stdout);
		fprintf(fw, "%d\n", data[i]);
	}
	printf("\n");
	tr = clock() - tr;
	double timeR_taken = ((double)tr)/CLOCKS_PER_SEC;
	printf("El programa tardo %f segundos en ordenar los numeros. \n", time_taken);
	printf("El programa tardo %f segundos en terminar\n", timeR_taken);
	//delete[] data;
	fclose(fp);
	fclose(fw);
}
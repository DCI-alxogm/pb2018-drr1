//este es el ejemplo utilizando la funcion MALLOC

#include<stdio.h>
#include<stdlib.h> //incluyo librerias necesarias

int main(){
		int num, i, *ptr, sum=0; //doy de alta variables
		ptr = (int*) malloc(num* sizeof(int)); //reservo memoria utilizando malloc

		printf("introduce el numero de elementos:"); //solicito numero de elementos
		scanf("%d",&num);

		if(!ptr){ //si ptr no tiene memoria 
			printf("error!memoria no reservada"); //se imprime que no tiene memoria
			exit(0); //se sale del programa
			}
		printf("introduce los elementos del arreglo:"); //solicita los valores
		for(i=0;i<num; ++i){ //inicia ciclo for para pedir varios
			scanf("%d", ptr + i); //pide los elementos uno por uno
			sum += *(ptr +i); }

		printf("sum= %d", sum); //se imprime la suma
		free(ptr); //libera la memoria
		return 0;

	}

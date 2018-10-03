//este es el ejemplo utilizando la funcion calloc

#include<stdio.h>
#include<stdlib.h> //incluyo librerias necesarias

int main(){//inicio programa
	
	int num, i, *ptr, sum=0; //doy de alta variables
	
	printf("introduce numero de elementos:"); //solicito numero de elementos
	scanf("%d", &num); //lee el numero de elementos solicitado

	ptr = (int*) calloc(num, sizeof(int)); //utilizo la funcion de calloc para definir ptr

	if(!ptr){ //si ptr no tiene valor
	printf("error memoria no reservada"); //se imprime que no tiene
	exit(0); //se sale del programa
		}

	printf("introduce los elementos del arreglo:"); //solicita los elementos del arreglo
	for(i=0; i< num; ++i);{ //va de uno en uno para solicitar cada elemento un valor
		scanf("%d", ptr+i); //escanea uno por uno los elementos
		sum += *(ptr + i); } 

	printf("Sum = %d", sum); //se imprime la suma
	free(ptr);
	return 0;
	
	}	

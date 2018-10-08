//este programa fue creado por diana rosales el 8 de octubre 2018 y calculara el promedio de unos numeros
#include<stdio.h>
#include<math.h>
#include<stdlib.h> //incluyo librerias necesarias


int main() {
		
		FILE *fp; //doy de alta la variable para el archivo de los datos
		fp=fopen("promedio.txt","r"); //abro el archivo de donde se leeran los datos
		int N, i, sum=0; //doy de alta variables de tipo enteras
		int *a; //doy de alta el apuntador
		float num[N], promedio, cont; //doy de alta variables flotantes
		
		a = (int*) malloc(N* sizeof(int)); //direccion del apuntador a con tamaño utilizando malloc
		printf("introduce el numero de elementos:"); //solicito numero de elementos
		scanf("%i",&N); //el usuario dice los elementos a leer
				
		

		for(i=0;i<N;i++){ //inicio ciclo for para leer los datos
			fscanf(fp,"%f", num); //escanea linea por linea
			cont=+ num; //va sumando todos los numeros
			sum++;	//va sumando cuantas veces se hace		 
				}
		promedio=cont/sum; //el promedio esta dado por la suma cont entre la cantidad de datos que es sum

		 printf("promedio es %f", promedio); //imprime el promedio
				 

fclose(fp); //cierra el archivo de lectura

}
		

//este proyecto fue creado por diana rosales 
//es el proyecto 2

#include<math.h> //incluyo librerias para realizar operaciones
#include<stdio.h> //incluyo libreria necesaria
#include "partes.h"

int main(){ //inicio el programa con funcion int main

	FILE *fp1; //doy de alta el archivo del cual se obtendran los datos principales
	FILE *fp2; //doy de alta el archivo para imprimir cada resultado	
	int i,Y,X,N; //doy de alta variables enteras
	float oe,e,n,s; //doy de alta variables flotantes
	float p[N][N]; //doy de alta variable flotante del cual se entiende que es para cada cuadrante de la lamina
	

	i=0; //inicializo las variables en 0
	
	

	fp1 = fopen("datosiniciales.txt","r"); //abro el archivo para leer los datos iniciales, ya es existente
	fscanf(fp1,"%f %f %f %f %i", &oe,&e,&n,&s,&N); //se leen las variables de Norte, sur, este y oeste de las placas asi como los cuadrantes que habran
	fclose(fp1); //cierro el archivo de lectura

	
	void parte1( )

	return 0;
}

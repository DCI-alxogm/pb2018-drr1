//este proyecto fue creado por diana rosales 
//es el proyecto 2

#include<math.h> //incluyo librerias para realizar operaciones
#include<stdio.h> //incluyo libreria necesaria

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

	
	for(X=0; X<N; X++){ //Empiezo cuando X tiene valor de 0, para avanzar de cuadrante en cuadrante y que su temperatura sea 0, como se indico en las instrucciones
                for(Y=0; Y<N; Y++){ //hago lo mismo para las Y
                        p[X][Y]=0; //inicializo en 0
      			  

	
		p[X][0]=oe; //este es para oeste o sea la izquierda
		p[X][N-1]=e; //este es para este, o sea la derecha

		p[0][Y]=n; //para norte
		p[N-1][Y]=s; //para sur

	
	while(p[5][5]<oe-1){ //se realiza la siguiente operacion
		     

			p[X][Y]=(p[X+1][Y]+p[X-1][Y]+p[X][Y+1]+p[X][Y-1])/4; //se realiza la operacion dada en las instrucciones del proyecto 
			            

                fp2 = fopen("placa%i", "w"); //para que imprima cada placa N veces
                
			fprintf(fp2, "%f ", p[X][Y]); //para que se imprima cada uno
		
		fprintf(fp2, "\n"); 
	fclose(fp2); //se cierra el archivo de resultados
	i++;} //para ir de uno en uno

	return 0;
}

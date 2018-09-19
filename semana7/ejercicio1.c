//este programa lo creo diana rosales el 17 de sep 2018
#include<stdio.h> //incluyo librerias necesarias
#include<math.h> //incluyo libreria de matematicas para realizar operaciones
int main(){


	FILE *fp; //doy de alta variable para abrir otro archivo
	FILE *fp2; //doy de alta para abrir un segundo archivo	
	int     k=10; //doy de alta variable entera
	float	h, P, Xmin, Xmax, N, fx, deltax, x, integral; //doy de alta variables flotantes, por si son decimales

	fp=fopen("entrada1.txt","r"); //abro en read el archivo del que sacaré los datos
	fp2=fopen("resumen1.txt","w"); //abro el archivo en el que imprimire los resultados

	fscanf(fp,"%f %f %f %f",&P,&Xmin,&Xmax,&N); //escaneo desde el archivo los datos
	printf("recuerda que tus resultados se imprimiran en resumen1.txt\n"); //imprimo para que el usuario revise 

	deltax=(Xmax-Xmin)/N; //delta es el cambio que llevara entre cada valor de x 

	for(x=Xmin; x<=Xmax; x+=deltax){ //para que empiece de el minimo valor hasta al maximo sumando el delta 													calculado
		    fx=pow(x,P); //para sacar la funcion de X, que es X a la potencia leida 	


	h=(x-Xmin)/k; //la formula para sacar H de acuerdo a K dado en este archivo
		integral = (pow(Xmin,P) + pow(x,P))/2; //la primera parte de la integral en el que sumo las dos 							potencias de Xinicial y X y la divido entre dos
		for(int i=1 ; i<k ; i++){ //empiezo ciclo For para la Sumatoria
			integral += pow((Xmin+i*h), P); //a la suma anterior, se le suma lo de sumatoria por XMin*h 								calculada
				integral= integral*h; //al resultado obtenido anteriormente, se le multiplica por h, 								segun la forumla
					}
		
	fprintf(fp2, "del numero %f la funcion es %f y la integral %f \n ", x, fx, integral); //imprimo en el segundo 													archivo los resultados 
					}
	fclose(fp); //cierro de donde lei
	fclose(fp2); //cierro en donde imprimi

	
}

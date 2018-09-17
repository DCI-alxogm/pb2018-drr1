//este programa lo creo diana rosales el 17 de sep 2018
#include<stdio.h>
#include<math.h>
int main(){


	FILE *fp;
	FILE *fp2;	
	int P, Xmin, Xmax, N,   h, k=10,  x; 
	float	 fx, deltax, integral;

	fp=fopen("entrada1.txt","r");
	fscanf(fp,"%i %i %i %i",&P, &Xmin, &Xmax, &N);
	fclose(fp);
	fp2=fopen("resumen1.txt","w");

	deltax=(Xmax-Xmin)/N;

	for(x=Xmin; x<=Xmax; x+=deltax){
		    fx=pow(x,P);	


	h=(x-Xmin)/k;
		integral = (pow(Xmin,P) + pow(x,P))/2;
		for(int i=1 ; i<k ; i++){
			integral += pow((Xmin+i*h), P);
		}
		integral*=h;
		
		fprintf(fp2, "del numero %i la funcion es %f y la integral %f \n ", x, fx, integral);
	}
	
	fclose(fp2);

	
}

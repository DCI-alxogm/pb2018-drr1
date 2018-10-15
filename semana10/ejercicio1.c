//este programacion fue creado por diana rosales 
//imprimira N puntos con igual espaciado en coordenadas x, y, z

#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[]){

	printf("el nombre del programa es %s\n",argv[0]);
	char *archivo;
	float xi,xf,yi,yf,zi,zf,x,y,z, deltax, deltay, deltaz;
	int N, i;
	
	FILE *fp;
if( argc==9){
		xi=atof(argv[1]);
		xf=atof(argv[2]);
		yi=atof(argv[3]);
		yf=atof(argv[4]);
		zi=atof(argv[5]);
		zf=atof(argv[6]);
		N=atoi(argv[7]);
		archivo= (argv[8]);
	
		printf("el nombre del archivo a abrir es %s\n", archivo);
		fp=fopen(archivo,"w+");

		
		for(i=0;i<=N;i++){
		
		deltax=(xf-xi)/N;
		x= xi + (deltax*i);
		deltay=(yf-yi)/N;
		y= yi + (deltay*i);
		deltaz=(zf-zi)/N;
		z= zi + (deltaz*i);
		
		fprintf(fp,"%f, %f, %f \n", x, y, z);
				}
		

		fclose(fp);}

	else if (argc > 9){
		printf("mas argumentos de los necesarios \n");}

	else {
		printf("se requieren 8 argumentos: xinicial, xfinal, yinicial, yfinal, zinicial, zfinal, la cantidad de puntos deseados, archivo donde se guardaran  \n");}
	
	return 0;
	}

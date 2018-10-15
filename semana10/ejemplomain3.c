#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[] ){
	printf("el programa qe estas ejecutqando es %s\n", argv[0]);
	char *archivo;
	float Tin, Tfin;
	int num;
	FILE *fp;
	
	if( argc==5){
		Tin=atof(argv[1]);
		Tfin=atof(argv[2]);
		num=atoi(argv[3]);
		archivo= (argv[4]);
	
		printf("el nombre del archivo a abrir es %s\n", archivo);
		fp=fopen(archivo,"w+");
		fprintf(fp,"Tin: %f, \t Tfin: %f, \t N: %i", Tin, Tfin, num);
		//se ṕueden agregar mas instrucciones al archivo

		fclose(fp);}

	else if (argc > 5){
		printf("mas argumentos de los necesarios \n");}

	else {
		printf("se requieren 4 argumentos: Tin, Tfin, Num, archivo \n");}
	
	return 0;
	}

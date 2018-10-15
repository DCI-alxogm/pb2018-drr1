#include<stdio.h>
int main( int argc, char *argv[] ){
	if( argc==2 ){
		printf("el argumento que se dio es: %s \n", argv[0]);}
	else if( argc > 2){
		printf("mas argumentos de los necesarios \n");}
	else{
		printf("se requiere de al menos 1 argumento \n");}
	return 0;
	}

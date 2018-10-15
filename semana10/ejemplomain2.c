#include<stdio.h>
int main( int argc, char *argv[]){
	printf("el programa que estas ejecutando es %s\n", argv[0]);
	char *data;
	FILE *fp;

	if(argc == 2){
		data=argv[1];
		printf("el nombre del archivo a abrir es %s \n",data);
		fp=fopen("data","w+");
			//aqui se pondria lo que se desearia hacer en el programa
		fclose(fp);
			}

	else if(argc > 2){
		printf("mas argumentos de los necesarios\n");
			}

	else {
		printf("se requiere al menos 1 argumento \n");
		}

	return 0;
		}

//este ejemplo utiliza la funcion realloc
#include<stdio.h>
#include<stdlib.h>
int main(){

		int *ptr, i, n1, n2; //doy de alta variables
		printf("introduce el numero de elementos n1:"); //solicito al usuario que me de los elementos de el primer grupo
		scanf("%d", &n1); //la escribe
		printf("introduce el numero de elementos n2:"); //solicito los elementos del segundo grupo
		scanf("%d", &n2); //lo escribe
		ptr = (int*) malloc(n1 * sizeof(int)); //declaro ptr que tenga cierto tamaño

		printf("direccion de la memoria reservada:"); //imprimo 

		for(i=0;i<n1;i++){ //ciclo for para ir de uno en uno de los elementos de n1
			printf("%x\t",ptr+i); //imprime la direccion de cada uno
				}

		ptr = realloc(ptr, n2); //vuelvo a ajustar la memoria

		for(i=0;i<n2;i++){ //ciclo para que lea cada elemento de n2
		printf("%u\t", ptr+i);
				}

			free(ptr); //libero memoria

			return 0;
		}

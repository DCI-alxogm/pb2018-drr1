//este es el tercer ejemplo

#include<stdio.h>
int main(){
	int MAX =3;
	int var[]= {10,100,200};
	int i, *ptr;
	
	ptr=&var; //direccion del arreglo

		for (i=0;i<MAX; i++){ //inicio ciclo 
		printf("la direccion de la variable var[%d] = %x\n", i, ptr); //imprimo la direccion de la variable
		printf("valor de la variable var[%d] = %d\n", i , *ptr); //imprimo el valor de la variable
		ptr++; //para mover a la siguiente posicion
					}
	return 0;
	}

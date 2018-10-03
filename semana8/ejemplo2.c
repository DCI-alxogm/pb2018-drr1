//este es el segundo ejemplo, lo creare con if para imrpimri o no si es NULL

#include<stdio.h>
int main(){
	int *ptr = NULL; //declaro que no hay apuntador asignado
	
	if(ptr){ //si ptr si tiene valor
		printf("El valor de ptr es: %x\n", ptr); //se imprime el valor
		}
	if(!ptr){ //si ptr no tiene valor
		printf("NULL\n"); //se imprime null
		}
	return 0;
	
	}

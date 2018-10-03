//este es el primer ejemplo de la semana 8
#include<stdio.h>//incluyo libreria necesaria
int main(){ //inicio programa
	int var=20; //declarar la variable
	int *ip; //declarar variable del apuntador
	ip = &var; //asigna la direccion de la variable 
	
	printf("la direccion de la variable var es: %x\n", &var); //para imprimir la direccion de var que es ip
	printf("Direccion guardada en el apuntador ip: %x\n", ip); //se imprimira la direccion de ip, seria igual a la de arriba
	printf("el valor de *ip; %d\n", *ip); //se imprime el valor de la var, que esta guardada en ip
	return 0; //acaba programa
	}

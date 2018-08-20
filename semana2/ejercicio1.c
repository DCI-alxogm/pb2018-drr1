/* Creado el 15 de Agosto de 2018 por diana rosales */

#include<stdio.h>

int main() 
 {	
	int edad;
	int edad2;
	char nombre[30];

	

	printf("Hola como te llamas \n");
	scanf("%s",&nombre[30]);
	printf("Muy bien: %s",nombre);
	printf("Dime cual es tu edad: \n");
	scanf("%i",&edad);
	edad2= edad+10;
	printf("\nTu edad en el 2028 sería de: %i \n", edad2);
	return 0;

}


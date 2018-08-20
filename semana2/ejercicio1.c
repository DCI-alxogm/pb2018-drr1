<<<<<<< HEAD
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

=======

/* Este programa lo creo diana rosales el 15 de agosto 2018 */

#include <stdio.h>
int main() {

int edad;
int edad2;
char nombre[30];

printf("Hola, Cual es tu nombre? \n");
scanf("%s",nombre);
printf("\nmucho gusto %s \n, cuantos años tienes?\n",nombre);
scanf("%i",&edad);
edad2=edad+10;
printf("\nTu edad en 2018 seria de: %i \n",edad2);
return 0;
}
>>>>>>> aa0d60969868dfa21a1b76986ac3fffe02a9a69a

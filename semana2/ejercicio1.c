
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

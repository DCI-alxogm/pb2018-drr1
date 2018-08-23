/*diana rosales el 23 de agosto 2018*/

#include<stdio.h> //incluye libreria
int main()
{
	char c; //da de alta la variable para que pueda insertar una letra
 	int es_vocalminuscula, es_vocalmayuscula; //para mas tarde declarar si es minuscula o no

	printf("Introduce una letra: "); //le pide al usuario una letra
	scanf("%c",&c);

	es_vocalminuscula = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ); //declara cuales son vocales
	es_vocalmayuscula = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ); //declara cuales son mayusculas

	if (es_vocalmayuscula || es_vocalminuscula){ //dice que si la variable se encuentra en esos grupos, es vocal
		printf("%c es una vocal\n", c);
	} else{ //y los que no se encuentran
		printf("%c es consonante\n", c); //se imprime que son consonantes

	}
	return 0;

	}

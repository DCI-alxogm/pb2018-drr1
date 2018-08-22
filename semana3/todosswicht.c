/* este programa fue creado por diana rosales el 22 de agosto del 2018 y son todos los programas unidos */

#include<stdio.h>
#include<math.h> //incluir librerias necesarias para operaciones

int main()
{
	/*variables*/
	int opcionprograma;
	int opciontemperatura;
	int 

	/*inicio*/
	printf("Hola! Que actividad necesitas realizar?\n");
	printf("Si intruduces 1 sera para cambio de temperatura\n");
	printf("Si intruduces 2 sera para cambio de coordenadas\n");

	scanf("%i",&opcionprograma);

	switch(opcionprograma)//para ya comenzar a ejecutar algun programa
	   {
		case 1:
			printf("Perfecto, haremos un cambio entre medidas de temperatura\n");
		case 2:
			printf("Perfecto, haremos un cambio entre coordenadas\n");
		default:
			printf("Error, programa no encontrado. Intente de nuevo\n");
			break;

	   }









return 0;

}
	


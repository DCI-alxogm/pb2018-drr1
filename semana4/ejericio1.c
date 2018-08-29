/* este programa fue creado por diana rosales el 29 de agosto del 2018 y son todos los programas unidos */

#include<stdio.h>
#include<math.h> //incluir librerias necesarias para operaciones

int main()
{
	/*doy de alta las variables*/
	int opcionprograma;
	int opciontemperatura;
	int opcioncoordenadas;
	float c, k, f;
	float x, y, r, o;
	int op;
	op=1;

	

	/*inicio*/

	while(op==1)
	{
	printf("Hola! Que actividad necesitas realizar?\n");
	printf("Si intruduces 1 sera para cambio de temperatura\n");
	printf("Si intruduces 2 sera para cambio de coordenadas\n");

	scanf("%i",&opcionprograma);

	switch(opcionprograma)//para ya comenzar a ejecutar algun programa
	   {
		case 1: //para temperatura
			printf("Perfecto, haremos un cambio entre medidas de temperatura\n");

				printf("Si introduces 1 sera porque introduces temperatura en Centigrados\n");
				printf("Si introduces 2 sera porque introduces temperatura en Farenheit\n");
				printf("Si introduces 3 sera porque introduces temperatura en Kelvin\n");
				scanf("%i",&opciontemperatura);
					switch(opciontemperatura){			
					case 1: 
					printf("Bien ahora introduce tu temperatura en Centigrados\n");
					scanf("%f",&c);
					f=(c*1.8)+32;
					k=c+273;
					printf("tu temperatura en farenheit es de %f \n",f);
					printf("tu temperatura en kelvin es de %f \n",k);
					break;
					

					case 2: 
					printf("Bien ahora introduce tu temperatura en Farenheit\n");
					scanf("%f",&f);
					c=(f-32)/1.8;
					k=c+273;
					printf("tu temperatura en centigrados es de %f \n",c);
					printf("tu temperatura en kelvin es de %f \n",k);
					break;
					

					case 3: 
					printf("Bien ahora introduce tu temperatura en Kelvin\n");
					scanf("%f",&k);
					c=k-273;
					f=(c*1.8)+32;
					printf("tu temperatura en centigrados es de %f \n",c);
					printf("tu temperatura en farenheit es de %f \n",k);
					break;

					

	  							}
			break;
				

		case 2: //para las coordenadas
			printf("Perfecto, haremos un cambio entre coordenadas\n");
				
				printf("Seran coordenadas polares o cartesianas?\n");
				printf("Si introduces 1 seran polares\n");
				printf("si introduces 2 seran cartesianas\n");
				scanf("%i",&opcioncoordenadas); 

				if(opcioncoordenadas==1){
					printf("introduce la primera coordenada polar\n");
					scanf("%f",&r);
					printf("introduce la segunda coordenada polar\n");
					scanf("%f",&o);
					x=r*cos(o);
					y=r*sin(o);
					printf("tus coordenadas cartesianas son %f, %f \n",x,y);

						if(x>=0 && y>=0){
						printf("y se encuentran en el cuadrante 1 \n");
						}else if (x<=0 && y>=0){
						printf("y se encuentran en el cuadrante 2 \n");
						}else if (x<=0 && y<=0){
						printf("y se encuentran en el cuadrante 3 \n");
						}else if (x>=0 && y<=0){
						printf("y se encuentran en el cuadrante 4 \n");
						} 
							
				}else{

					printf("introduce la primera coordenada cartesiana\n");
					scanf("%f",&x);
					printf("introduce la segunda coordenada cartesiana\n");
					scanf("%f",&y);
					r=sqrt(pow(x,2)+pow(y,2));
					o=atan(y/x);
					
					printf("tus coordenadas polares son %f, %f \n",r, o);
					        if(x>=0 && y>=0){
						printf("y se encuentran en el cuadrante 1 \n");
						}else if (x<=0 && y>=0){
						printf("y se encuentran en el cuadrante 2 \n");
						}else if (x<=0 && y<=0){
						printf("y se encuentran en el cuadrante 3 \n");
						}else if (x>=0 && y<=0){
						printf("y se encuentran en el cuadrante 4 \n");
						} 
							
				}
				

			
			


			
}
printf("deseas hacer una conversion nuevamente? 1 para si, 2 para no\n");
			scanf("%i",&op);



}
	   }



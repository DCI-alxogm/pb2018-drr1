//ejercicio creado por diana rosales el 10 de septiembre
#include<stdio.h>
int main()
{

		int n=10, i, genero, semestre, count=0, count2=0, countsem1=0, countsem2=0, countsem3=0, countsem4=0, countsem5=0, countsem6=0, countsem7=0, countsem8=0, countsem9=0;
		float    promedio=0, calificaciones ;

		for(i=0;i<n;i++){

			
			printf("genero: (0 masculino y 1 femenino)\n");
			scanf("%i",&genero);

			printf("semestre cursando:\n");
			scanf("%i",&semestre);

			printf("calificaciones:\n");
			scanf("%f",&calificaciones);
				
				promedio+=(calificaciones/n); // promedio=promedio+calificaciones
				             	if(genero==0){
						count++;
		           					 }
						if(genero==1){
						count2++;
								}
				if(semestre==1){
				countsem1++; }
				if(semestre==2){
				countsem2++; }
				if(semestre==3){
				countsem3++; }
				if(semestre==4){
				countsem4++; }
				if(semestre==5){
				countsem5++; }
				if(semestre==6){
				countsem6++; }
				if(semestre==7){
				countsem7++; }
				if(semestre==8){
				countsem8++; }
				if(semestre==9){
				countsem9++; }
					
				

						}

		
printf("La calificación promedio es %f. Se reportaron 10 estudiantes, de los cuales %i son hombres y %i son mujeres. En el primer semestre hay %i, en el segundo %i, en el tercero %i, en el cuarto %i, en el quinto semestre %i, en el sexto %i, en el septimo %i, octavo %i y en el noveno %i",promedio,count,count2, countsem1,countsem2,countsem3,countsem4,countsem5,countsem6,countsem7,countsem8,countsem9);

	}
		

	

		
		            

		

		


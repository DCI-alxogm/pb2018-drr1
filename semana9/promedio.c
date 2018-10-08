//este programa fue creado por diana rosales el 8 de octubre 2018 y calculara el promedio de unos numeros
#include<stdio.h>
#include<math.h>


int main() {
		
		FILE *fp;
		fp=fopen("promedio.txt","r");
		int N=267, i;
		float num, promedio, count;
				
		

		for(i=0;i<N;i++){
			fscanf(fp,"%f",&num);
			count+=num;
			
				}
		promedio=count/N;

		 printf("promedio es %f", promedio);
				 

fclose(fp);

}
		

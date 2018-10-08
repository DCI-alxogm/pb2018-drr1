//este programa fue creado por diana rosales el 8 de octubre 2018
#include<stdio.h>
#include<math.h>


int main() {
		
		FILE *fp;
		fp=fopen("num_maximo.txt","r");
		int N=96, i;
		float num, nummax;
				
		

		for(i=0;i<N;i++){
			fscanf(fp,"%f",&num);}
		nummax

		 printf("numero maximo es %f \n", nummax);
				 

fclose(fp);

}
		

//Este programa fue creado por Diana Rosales 6 de septiembre


#include<stdio.h> //incluimos las librerias necesarias
#include<math.h>

int main(){
	//declaramos las variables necesarias	
	int ini=0, fin=0, count=0;	

	printf("Hola!en que numero te gustaria empezar? \n");
	scanf("%i", &ini);

	printf("en que numero te gustaria acabar? \n");
	scanf("%i", &fin);

	while((fin-ini)>400){ //para que no sean mas de 100 numeros primos (por cada 50 hay 25)
		printf("\nEscribe otro intervalo que sean menos numeros primos ");
		scanf("%i %i", &ini, &fin);
	}

	for(int i=ini; i<=fin ; i++){		
		int num, primo=1;
		num = sqrt(i);
		//revisamos si el numero "i" es primo o no
		for(int j=2 ; j<=num ; j++){
			if(i%j==0){
				primo=0;			
			}			
		}
		//si si es primo se imprime 
		if(primo==1){
			printf("%i ", i);	
			count++;
			//si el numero de primos que llevo son mas de 20 se pasa al siguiente renglon
			if(count%20==0){
				printf("\n");		
			}	
		}	 
	}
	printf("\n");
	return 0;
}

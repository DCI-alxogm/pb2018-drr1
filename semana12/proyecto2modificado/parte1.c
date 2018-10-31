#include <stdio.h>
#include "partes.h"

void parte1( ){

for(X=0; X<N; X++){ //Empiezo cuando X tiene valor de 0, para avanzar de cuadrante en cuadrante y que su temperatura sea 0, como se indico en las instrucciones
                for(Y=0; Y<N; Y++){ //hago lo mismo para las Y
                        p[X][Y]=0; //inicializo en 0
      			  

	
		p[X][0]=oe; //este es para oeste o sea la izquierda
		p[X][N-1]=e; //este es para este, o sea la derecha

		p[0][Y]=n; //para norte
		p[N-1][Y]=s; //para sur

	
	while(p[5][5]<oe-1){ //se realiza la siguiente operacion
		     

			p[X][Y]=(p[X+1][Y]+p[X-1][Y]+p[X][Y+1]+p[X][Y-1])/4; //se realiza la operacion dada en las instrucciones del proyecto 
			            

                fp2 = fopen("placa%i", "w"); //para que imprima cada placa N veces
                
			fprintf(fp2, "%f ", p[X][Y]); //para que se imprima cada uno
		
		fprintf(fp2, "\n"); 
	fclose(fp2); //se cierra el archivo de resultados
	i++;} //para ir de uno en uno
}}

return ;
}

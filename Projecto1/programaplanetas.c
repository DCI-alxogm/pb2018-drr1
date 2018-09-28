
//este programa fue creado por diana rosales para entregar el 1 de octubre

//incluimos las liberarias necesarias
#include <stdio.h>
#include <math.h>

int main(){
	
    FILE *fp; //dar de alta el archivo del cual se leeran
   FILE *fp2; //para los archivos en los cuales se imprimiran
	fp = fopen("resumen1.txt", "r"); //se abre el del cual se leera que ya existe

	//declaramos las variables necesarias para el programa
	
	int N=9, count=0; //los planetas que son (9) y un contador desde 0
	char planeta[20]; //para leer el nombre del planeta
	double  G, xo, yo, zo, vx, vy, vz, h=.001, r; //posiciones, velocidades y otras cantidades necesarias para las operaciones

	//calculamos la constante de gravitacion, que esta dada por 4 pi al cuadrado
	G=4*pow(3.1416,2);

	

    	//se abre ciclo for para hacerlo N veces (9 planetas)
	for(int i=0 ; i<N ; i++){
		
		//se lee el nombre, posiciones y velocidades
		fscanf(fp, "%s %lf %lf %lf %lf %lf %lf \n", &planeta[20], &xo, &yo, &zo, &vx, &vy, &vz);
		

       		//se multiplica por 365 para sacar en un año, porque estaba en dia
		vx*=365;
		vy*=365;
		vz*=365;

        	
        	fp2=fopen(planeta,"w"); //para crear el archivo con cada nombre de planeta


        	//se hace un ciclo para hacer las operaciones 
        	for(i=0 ; i<=1 ; i+=h){ //empieza de tiempo 0, maximo 1 año y va de la cte h en h

           		//solo se imprimira uno de cada diez puntos
            		if(count%10==0){ //el contador que dimos de alta para empezar en 0
                   		//se imprime las posiciones y velocidades 
                    		fprintf(fp2, "\n  %lf, %lf, %lf, %lf , %lf , %lf", vx, vy, vz, xo, yo, zo);
           	 	}
            		count++;

                	//pero como va cambiando, se van sumando las nuevas distancias en x y z
               		xo+=vx*h;
                	yo+=vy*h;
                	zo+=vz*h;

                	//se calcula la distancia para el radio
                	r = sqrt((xo*xo) + (yo*yo) + (zo*zo));

                	//se calculan las nuevas velocidades
                	vx-=h*((G*xo)/pow(r, 3));
                	vy-=h*((G*yo)/pow(r, 3));
                	vz-=h*((G*zo)/pow(r, 3));
        	}

        	//cerramos el archivo del planeta 
		fclose(fp2);
	}
	//cerramos el archivo de lectura
	fclose(fp);

	return 0;
}

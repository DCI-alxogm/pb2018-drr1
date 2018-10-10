//este programa fue creado por diana rosales y utilizare los 4 tipos de funciones
#include<stdio.h>
#include<math.h>
void doble();
float mitad();
void cubo(float x);
float raiz(float x);

int main(){
		float x, xr;
		printf("introduce un numero\n");
		scanf("%f",&x);
		doble();
		cubo(float x);
		mitad();
		xr=raiz(x);
		printf("la raiz del numero %f es %f\n",x,xr);
		return 0;
	  }

void doble(){
		float x2;
		x2=2*x;
		printf("el doble del numero %f es %f\n",x,x2);
             }

float raiz(float x){
	return sqrt(x);
	           }

void cubo(float x){
	float x3;	
	x3=x*x*x;
	printf("el cubo de %f es %f\n",x,x3);
		}
float mitad(){
	float xm;	
	xm=x/2;
	printf("la mitad de tu numero %f es %f\n",x,xm);
	     }

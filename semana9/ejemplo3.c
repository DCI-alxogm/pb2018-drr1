//este es el tercer ejemplo
#include<stdio.h>
void cuadrado(float h);
int main(){
	cuadrado(float h);
	return 0;
	}

void cuadrado(float h){
	float x,x2;
	printf("introduce un numero\n");
	scanf("%f",&x);
	x2=x*x;
	printf("el cuadrado de %f es %f\n",x,x2);
}

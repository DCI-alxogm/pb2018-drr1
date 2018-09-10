//este es el ejemplo 
#include<stdio.h>
int main(){

	int  i, n=10;
	float numeros[n];

	for(i=0;i<n;i++){
	printf("dime un numero y te digo su doble \n");
	scanf("%f",&numeros[i]);
	numeros[i]*=2;
	printf("%f \n",numeros[i]);
			}

	}

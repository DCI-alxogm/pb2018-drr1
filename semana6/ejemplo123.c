//este ejemplo incluye el 1,2,3

#include<stdio.h>
int main()
{
	int n=10, i;
	float  numeros[n];
	
	for(i=0;i<n;i++){
	printf("pon un listado de numeros enteros\n");
	scanf("%f",&numeros[i]);
	printf("%f \n",numeros[i]);
	}
}

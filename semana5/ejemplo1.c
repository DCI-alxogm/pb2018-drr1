#include<stdio.h>
int main()
{
	float tempC, tempK;
	float inicial, final, delta;
	int n=10, i, rp=1;
	
	
	
	
	while(rp==1){
	printf("Hola desde que temperatura quieres iniciar?\n");
	scanf("%f",&inicial);
	printf("Ahora desde que temperatura quieres terminar?\n");
	scanf("%f",&final);
	
	delta=(final-inicial)/n;
	tempC=inicial;

	for(i=0;i<n;i++){
	tempK=tempC+273.15;
	printf("%f %f\n",tempC,tempK);
	tempC=tempC+delta;
	}
	printf("quieres empezar de nuevo el programa? 1 es si, 2 es no\n");
	scanf("%i",&rp);
}
return 0;
}



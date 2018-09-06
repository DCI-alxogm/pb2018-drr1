//este programa fue creado por diana rosales el 6 de septiembre 

#include<stdio.h>
int main()
{
	int n, op,  i, a[100], r; //doy de alta variables
	
	//se pregunta cual operacion desea hacer
		printf("Teclea 1 para convertir de base 10 a binario\n"); 
		printf("Teclea 2 para convertir de binario a base 10\n");
		scanf("%i",&op);
switch(op)
	{
case 1: //es el caso para convertir de numero base 10 y se imprima en numero binario 
		printf("ingresa el numero base 10\n");
		scanf("%i",&n);
		i=0;
			if(n==0){
				printf("%i\n",n);
			}
			else if (n>0){
				a[i]=n%2;n/=2;i++;
			}
		for(r=i-1;r>=0;r--){
	
			printf("%i",a[r]);
		}
		printf("\n");
		break;
	}

		
return 0;
}


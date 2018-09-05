//este programa fue creado por diana rosales el 5/sep

#include<stdio.h>
int main(){

	int  x, f=1, i;

	while(f==1){
		printf("dame un numero entero\n");
		scanf("%i",&x);

		for(i=1;i<=x;i++){
		f=f*i;
		 }

		printf("factorial es: %i \n",f);

			 printf("otra operacion? 1 es para si, 2 es para no\n");
			 scanf("%i",&f);
			}
return 0;
}
		


	

/* este programa fue creado por diana rosales el 20 de agosto del 2018*/

#include<stdio.h>
#include<math.h>

int main(){

	float xrad;
	float xgrad;
	float y;


	printf("Hola dame un numero cualquiera (en grados)\n");
	scanf("%f",&xgrad);
	xrad=xgrad/57.3;

	y=exp((-1)*xgrad);
	printf("\nLa primera operacion es igual a: %f\n",y);


	y= cos(xrad)+ (2*tan(xrad/2));

	
	printf("\nLa segunda operacion es igual a: %f\n",y);

	y=log(xrad)+(3*xrad*xrad);
	
	printf("\nLa tercera operacion es igual a: %f\n",y);

	return 0;
}

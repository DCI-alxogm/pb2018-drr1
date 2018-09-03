//este ejercicio fue creado el 3 de septiembre por diana rosales

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float exp_, log_, sin_, cos_, raiz_, xinicio, xfinal, i, x, delta;
	
	

	printf("hola con que numero quieres iniciar\n");
	scanf("%f",&xinicio);
	printf("y con que numero quieres terminar\n");
	scanf("%f",&xfinal);
	printf("y con que espaciado\n");
	scanf("%f",&delta);
	
	n=(xfinal-xinicio)/delta;

	for(i=0;i<n;i++){

		x=xinicio+(delta*n);
		exp_=exp(x);
		log_=log(x);
		sin_=sin(x);
		cos_=cos(x);
		raiz_=sqrt(x);
		printf("Del numero %f los datos son:\n",x);
		printf("El exponente es %f \n",exp_);
		printf("El logaritmo es %f \n",log_);
		printf("El seno es %f \n",sin_);
		printf("El coseno es %f \n",cos_);
		printf("La raiz es %f \n",raiz_);
		}
return 0;
}
	

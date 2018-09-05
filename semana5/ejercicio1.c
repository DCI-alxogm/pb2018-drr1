//este ejercicio fue creado el 3 de septiembre por diana rosales

#include<stdio.h> //incluyo librerias necesarias
#include<math.h>
int main()
{
	int n;
	float exp_, log_, sin_, cos_, raiz_, xinicio, xfinal, i, x, delta; //doy de alta las variables 
	
	

	printf("hola con que numero quieres iniciar\n"); //pido numero iniccial
	scanf("%f",&xinicio);
	printf("y con que numero quieres terminar\n"); //pido numero final
	scanf("%f",&xfinal);
	printf("y con que espaciado\n"); //pido el delta
	scanf("%f",&delta);
	
	n=(xfinal-xinicio)/delta; //calculo cuantos numeros habra en ese intervalo con el espaciado dado 

	for(i=0;i<=n;i++){ //inicio for diciendo que se va a repetir hasta llegar a n veccces

		x=(xinicio+(delta*i)); //para dar el valor de x sumando el x inicial con el delta dado
		exp_=exp(x); //inicio las funciones pedidas
		log_=log(x);
		sin_=sin(x);
		cos_=cos(x);
		raiz_=sqrt(x);
		printf("Del numero %f los datos son:\n",x); //imprimo todos los resultados
		printf("El exponente es %f \n",exp_);
		printf("El logaritmo es %f \n",log_);
		printf("El seno es %f \n",sin_);
		printf("El coseno es %f \n",cos_);
		printf("La raiz es %f \n",raiz_);
		}
return 0;
}
	

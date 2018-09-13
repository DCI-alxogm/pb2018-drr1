//este programa es la modificacion del ejercicio de la semana 5 para que imprima los resultados en otro archivo


#include<math.h>
#include<stdio.h>


int main()
{
	FILE *fp; //archivo donde se imprimiran los resultados
	int n;
	float exp_, log_, sin_, cos_, raiz_, xinicio, xfinal, i, x, delta; //doy de alta las variables 
	
	
fp=fopen("funciones.txt","w");
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
	
		fprintf(fp,"Del numero %f los datos son:\n",x); //imprimo todos los resultados
		fprintf(fp,"El exponente es %f \n",exp_);
		fprintf(fp,"El logaritmo es %f \n",log_);
		fprintf(fp,"El seno es %f \n",sin_);
		fprintf(fp,"El coseno es %f \n",cos_);
		fprintf(fp,"La raiz es %f \n",raiz_);
	
		
		}
	printf("la respuesta se imprimira en el archivo llamado funciones.txt\n");

		
fclose(fp);
}
	

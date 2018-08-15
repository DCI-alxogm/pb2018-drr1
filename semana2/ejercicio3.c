/* este ejercicio 3 lo creo diana rosales el 15 de agosto 2018 */

#include <stdio.h>
int main()
{
	float a;
	float b;
	float c;
	float d;

	float h;
	float e;
	float f;
	float g;
	
	printf("hola! me dices un numero?, puede llevar decimales \n"); /*para añadir el primero*/
	scanf("%f",&a);

	printf("otro numero \n"); /*para añadir el segundo*/
	scanf("%f",&b);

	printf(" un tercer numero? \n"); /*para añadir el tercero*/
	scanf("%f",&c);

	printf("un ultimo numero? \n"); /*para añadir el cuarto*/
	scanf("%f",&d);

	h=(a+b)*c/d;
	
	printf("Al hacer la operacion (a+b)* c /d la respuesta es %f \n",h);

	e=((a+b)*c)/d;
	
	printf("Al hacer la operacion ((a+b)* c) /d la respuesta es %f \n",e);

	f=(a+b)*c/d;

	printf("Al hacer la operacion (a+b)* c /d la respuesta es %f \n",f);

	g=a+(b*c)/d;
	
	printf("Al hacer la operacion a+ (b * c) /d la respuesta es %f \n",g);

}


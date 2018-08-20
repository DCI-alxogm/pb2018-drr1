/* este ejercicio lo creo diana rosales el 15 de agosto 2018 */

#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;

	int h;
	int e;
	int f;
	int g;
	
	printf("hola! me dices un numero? \n"); /*para añadir el primero*/
	scanf("%i",&a);

	printf("ahora dime otro numero \n"); /*para añadir el segundo*/
	scanf("%i",&b);

	printf("Me dices un tercer numero? \n"); /*para añadir el tercero*/
	scanf("%i",&c);

	printf("Me dices un ultimo numero? \n"); /*para añadir el cuarto*/
	scanf("%i",&d);

	h=(a+b)*c/d;
	
	printf("Al hacer la operacion (a+b)* c /d la respuesta es %i \n",h);

	e=((a+b)*c)/d;
	
	printf("Al hacer la operacion ((a+b)* c) /d la respuesta es %i \n",e);

	f=(a+b)*c/d;

	printf("Al hacer la operacion (a+b)* c /d la respuesta es %i \n",f);

	g=a+(b*c)/d;
	
	printf("Al hacer la operacion a+ (b * c) /d la respuesta es %i \n",g);

}


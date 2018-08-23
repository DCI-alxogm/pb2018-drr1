/*diana rosales el 23 de agosto*/

#include<stdio.h> //incluye libreria necesaria
int main()
{
	int numero1, numero2; //dar da alta las dos variables que se necesitan
	printf("introduzca dos numeros enteros: "); //solicita que la persona introduzca dos numeros enteros
	scanf("%i %i", &numero1, &numero2); //la persona puede poner los numeros

if(numero1==numero2) //la condicion consta de que si los dos numeros son iguales imprime la primera opcion
{
	printf("Resultado: %d = %d", numero1, numero2); //te dice que los dos numeros son iguales
}
else //pero si no son iguales
{
	printf("Result: %d < %d", numero1, numero2); //te imprime cual es menor que el otro 
}
return 0;
}

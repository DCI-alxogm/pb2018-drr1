/* este ejemplo es del dia  de agosto por diana rosales */

#include<stdio.h> //incluimos la libreria necesaria
int main() //para comenzar el programa
{
int a; //dar de alta la variable con la que trabajaremos
printf("introduce un numero\n"); //le pide a la persona cualquier numero
scanf("%i",&a); //para que la persona pueda poner el numero 
if(a%2==0){ //se pregunta si el residuo de la division del numero con un 2 es cero 
printf(" a=%i es par\n",a); //si si es 0 es porque es par
}else{
printf(" a=%i es impar\n",a); //si no es 0 es porque es impar
}
return 0; //se cierra

} 



/*este programa fue creado por diana rosales el 20 de agosto 2018*/ 

#include<stdio.h> //incluir libreria necesaria

int main(){
	float c1;
	float faren;
	float kelvin;
	float cent;

	printf("Hola, dime una temperatura en centigrados\n"); //para pedir comentarios
	scanf("%f",&c1);

	kelvin=c1+273;
	printf("\nTu temperatura en grados Kelvin es de: %f\n",kelvin); //para convertir a kelvin
	
	faren=(c1*1.8)+32;
	printf("\nTu temperatura en grados Farenheit es de: %f\n",faren); //para convertir a farenheit

	cent=(faren-32)/1.8;
	printf("\nTu temperatura en grados Centígrados es de: %f\n",cent); //para regresar a centigrados

	return 0; //para cerrar el programa si pones variable tipo float

}

	

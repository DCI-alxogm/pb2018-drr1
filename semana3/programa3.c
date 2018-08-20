/* este programa fue creado por diana rosales el 20/ agosto 2018 */

#include<stdio.h>
#include<math.h>

int main(){

	float x,y,z,r,o,l,x2,y2,z2;

	printf("\nHola intruduce una coordenada en x");
	scanf("%f",&x);


	printf("\nAhora intruduce una coordenada en y");
	scanf("%f",&y);


	printf("\nAhora intruduce una coordenada en z");
	scanf("%f",&z);

	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	o=1/(cos(z/r));
	l=1/(tan(y/x));

	x2=r*(cos(l))*(cos(o));
	y2=r*(sin(l))*(sin(o));
	z2=r*cos(l);
	
	printf("\ntus coordenadas esfericas serian: %f, %f, %f \n",r,o,l);
	printf("\ntus coordenadas cartesianas son: %f, %f, %f \n", x2,y2,z2);
	






	return 0;
 }

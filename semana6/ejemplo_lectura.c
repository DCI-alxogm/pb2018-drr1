//diana rosales

#include<stdio.h>
int main() {
	char var[255];
	archivo=fopen("lectura.txt","r");
	fgets(var,255,(FILE*)archivo);
	printf("%s",var);
	fscanf(archivo,"%s",var);
	printf("%s\n",var);
	fscanf(archivo, "%f %f",&var1,&var2);
	printf("%f %f\n",var1,var2);
	fclose(archivo);

}

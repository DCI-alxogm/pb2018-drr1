//este ejemplo encunetra la suma de 6 numeros de un arreglo

#include<stdio.h>
int main(){
		int i, num[6]; sum=0;
		printf("introduce 6 numeros enteros:\n");
		for(i=0;i<6;i++)
		{ 	

			// (num + i) es igual a &num[i]
			scanf("%d",(num+i));
			// *(num +i) es igual a num[i]
			sum += *(num + i);
		}
		
		printf("suma = %d", sum);
		return 0;
		}

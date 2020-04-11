#include<stdio.h>
#include<stdlib.h>

void troca (int *x, int *y){
	int temp = *x;
	*x = *y;
	*y =  temp;
	printf("Dentro da funcao = %d  e %d \n", *x, *y);
}
int main(){
	
	int a = 2;
	int b = 3;
	
	printf("Antes da funcao = %d e %d \n", a, b);
	troca(&a, &b);
	printf("Depois da funcao = %d e %d \n", a, b); 
	
	system("pause");
		
	return 0;
}
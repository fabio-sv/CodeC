#include<stdio.h>
#include<stdlib.h>

// Função com retorno...
int soma(int num1, int num2){
	return num1 + num2;
}

int main(){
	
	int a, b;
	
	printf("Valor de ""a"": ");
	scanf("%d", &a);
	printf("Valor de ""b"": ");
	scanf("%d", &b);
	printf("\n Resultado = %d", soma(a,b));
		
	return 0;
}
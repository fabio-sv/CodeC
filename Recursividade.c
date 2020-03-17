#include<stdio.h>
#include<stdlib.h>

	
	int fatorial (int n)
	{
	if (n == 0)
		return 1;
	
	else 
		return n * fatorial (n - 1);
	}
	
	int main ( ){
		
		int numero;
		printf("Digite um Numero: ");
		scanf("%d", &numero);
		
		printf("%d", fatorial (numero));
		
	}

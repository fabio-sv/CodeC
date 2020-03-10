#include<stdio.h>
#include<stdlib.h>

int imprime(){
	printf("Teste de funcao\n");
}

int main ()
{
	imprime();
	imprime(5);
	imprime(5, 'a');
	
	return 0;
}
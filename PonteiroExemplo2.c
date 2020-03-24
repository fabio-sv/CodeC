#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int valor = 20;
	int *ponteiro;
	ponteiro = &valor;
	//Aqui o ponteiro está atribuindo o valor "12" na variável "valor".
	*ponteiro = 12;
	
	printf("Ponteiro = %i\n", *ponteiro);
	printf("Valor = %d\n", valor);
	
	return 0;
}

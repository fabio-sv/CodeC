#include<stdio.h>
#include<stdlib.h>


int main (){
	
	int c = 10; 
	//Para declarar um ponteiro deve - se 
	//usar o operador "*" antes do nome do ponteiro.
	int *ponteiro; 
	//O ponterio apontará para o endereço de memória a qual ele está sendo atribuido
	//caso a variável esteja recebendo um valor, o ponterio irá apontar para esse valor.
	ponteiro = &c;
	
	printf("O ponteiro esta apontando para o valor: %d", *ponteiro);
	
	return 0;
	
}
#include<stdio.h>
#include<stdlib.h>

main (){
	void *pp;
	int p2 = 10;
	
	pp = &p2;
	//tenta acessar o conteudo do ponteiro genérico
	printf("Conteudo: %d \n", *pp);//ERRO
	//modo de imprimir o valor da variável p2 apontada por pp
	printf("Conteudo: %d \n", *(int*)pp);//CORRETO
	
	return 0;
}
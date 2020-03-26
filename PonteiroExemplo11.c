#include<stdio.h>
#include<stdlib.h>

main (){
	
	int x = 10;
	int *p1 = &x;
	int **p2 = &p1;
	//Endereço de p2
	printf("Endereco de p2: %p \n", p2);
	//Conteudo do Endereço
	printf("Endereco de *p: %p \n", *p2);
	//Conteudo do endereço do endereço
	printf("Endereco de pp: %d \n", **p2);
	
	return 0;
}
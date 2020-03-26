#include<stdio.h>
#include<stdlib.h>

main (){
	
	char letra = 'a';
	char *p1; 
	char **p2;
	char ***p3;
	
	p1 = &letra;
	p2 = &p1;
	p3 = &p2;
	
	printf("Conteudo do Ponteiro *p1: %c \n", *p1);
	printf("Conteudo do Ponteiro **p2: %c \n", **p2);
	printf("Conteudo do Ponteiro ***p3: %c \n", ***p3);
	
	return 0;
}
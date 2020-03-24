#include<stdio.h>
#include<stdlib.h>

main(){
	
	int *p, *p1, x = 10;
	float y = 20.0;
	
	p = &x;
	printf("Conteudo apontado por p: %i\n", *p);
	
	p1 = &p;
	printf("Conteudo apontado por p1: %i\n", *p1);
	
	p = &y;
	printf("\nConteudo apontado por p: %i\n", *p);
	printf("Conteudo apontado por p: %f\n", *p);
	printf("Conteudo apontado por p: %f\n", *((float*)p));
	
	return 0;	
}	
	/*Conteudo apontado por p: 10
	Conteudo apontado por p1: 6356724
	Conteudo apontado por p: 1101004800
	Conteudo apontado por p: 0.000000
	Conteudo apontado por p: 20.000000*/

#include<stdio.h>
#include<stdlib.h>

main (){
	
	int *p, *p1, x = 10, y = 15;
	
	p = &x;
	p1 = &y;
	
	if(*p < *p1){
		printf("X e maior que Y !!! \n");
	}
	else if (*p > *p1) {
		printf("Y e maior que X !!! \n");
	}
	if(p < p1){
		printf("O endereco do ponteiro P e menor que do ponteiro p1 !!! \n");
	}
	else{
		printf("O endereco do ponteiro p e maior que do ponteiro p1 !!! \n");
	}
	printf("\nEndereco de p: %p \n", p);
	printf("Endereco de p1: %p \n", p1);

	
	return 0;
}
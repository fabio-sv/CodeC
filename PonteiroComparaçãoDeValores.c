#include<stdio.h>
#include<stdlib.h>

main (){
	
	int *p, *p1, x, y;
	
	printf("Digite um valor inteiro para X: ");
	scanf("%i", &x);
	printf("Digite um valor inteiro para Y: ");
	scanf("%i", &y);
	
	p = &x;
	p1 = &y;
	
	if(*p > *p1){
		printf("\nX e maior que Y... \n");
	}else if(*p < *p1){
		printf("\nY e maior que X... \n");
	}else if(*p1 == *p1){
		printf("\nX e igual a Y... \n");
	}
	
	return 0;
}
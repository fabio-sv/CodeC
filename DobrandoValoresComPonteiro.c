#include<stdio.h>
#include<stdlib.h>

main (){
	
	int vet[5] = {1,2,3,4,5};
	int *p = vet;
	int i;
	
	for(i = 0; i < 5; i++){
	printf("Digite um numero inteiro: ");
	scanf("%i", &vet[i]);
	}
	for(i = 0;i < 5; i++){
		printf("\nO dobro de %i e %i ", vet[i],(*(p + i)* 2));
	}
	printf("\n");

	
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
// Usando Arrey para Imprimir
main (){
	
	int vet[5] = {1,2,3,4,5};
	int *p = vet;
	int i;
	
	for(i = 0; i < 5; i++){
		
		printf("%i ", vet[i]);
	}
	
	//Usando Ponteiro para Imprimir
main (){
	
	int vet[5] = {1,2,3,4,5};
	int *p = vet;
	int i;
	
	for(i = 0; i < 5; i++){
		
		printf("%i ", *(p + i));
	}
	
	return 0;
}
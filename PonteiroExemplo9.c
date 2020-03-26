#include<stdio.h>
#include<stdlib.h>

main (){
	
	int vet[5] = {1,2,3,4,5,};
	int *p;
	//O está apontando para o primeiro elemento da Array(vet[1])
	p = vet;
	//Para percorrer a Array deve - se somar  as posições da Array
	printf("Terceiro Vetor da Array = %i\n", p[2], *(p + 2));
	
	return 0;
}
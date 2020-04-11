#include<stdio.h>
#include<stdlib.h>

// Função sem retorno...
void imprime(int x){
	int i;
	for(i = 0; i <= x; i++){
		printf("Linha %d \n", i);
	}
	
}
int main(){
	
	imprime(5);
		
	return 0;
}
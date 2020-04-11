#include<stdio.h>
#include<stdlib.h>

int raizQuadrada (int numero2){
	return numero2 * numero2;
}

int main(){
	
	int numero1, resultado;
	
	printf("Informe um valor: ");
	scanf("%d", &numero1);
	resultado = raizQuadrada(numero1);
	printf("Resultado = %d", resultado);
	
	return 0;
}
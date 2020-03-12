#include<stdio.h>
#include<stdlib.h>

void Maior (int numero1, int numero2){
	if (numero1 > numero2){
		printf("O numero maior eh %d", numero1);
	}
	if(numero1 < numero2){
		printf("O numero maior eh %d", numero2);
	}
	else if(numero1 == numero2){
		printf("Os numeros sao iguais !!!");
	}
}
int main (){
	
	int numero1;
	int numero2;
	
	printf("Primeiro Valor: ");
	scanf("%d", &numero1);
	printf("Segundo Valor: ");
	scanf("%d", &numero2);
	
	Maior(numero1, numero2);
	
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

void ReferenciaMes(int mes)
{
	if ( mes == 1){
		printf("Janeiro, 31 dias");
	}
	if ( mes == 2){
		printf("Fevereiro, 28 dias");
	}
	if ( mes == 3){
		printf("Marco, 31 dias");
	}
	if ( mes == 4){
		printf("Abril, 30 dias");
	}
	if ( mes == 5){
		printf("Maio, 31 dias");
	}
	if ( mes == 6 ){
		printf("Junho, 30 dias");
	}
	if ( mes == 7 ){
		printf("Julho, 31 dias");
	}
	if ( mes == 8 ){
		printf("Agosto, 30 dias");
	}
	if ( mes == 9 ){
		printf("Setembro, 31 dias");
	}
	if ( mes == 10 ){
		printf("Outubro, 30 dias");
	}
	if ( mes == 11 ){
		printf("Novembro, 31 dias");
	}
	if ( mes == 12 ){
		printf("Dezembro 30 dias");
	}

}

int main (){
	
	int mes;
	
	printf("Digite o Mes: ");
	scanf("%d", &mes);
	
	ReferenciaMes (mes);
	
	return 0;
}
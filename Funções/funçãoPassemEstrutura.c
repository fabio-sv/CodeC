#include<stdio.h>
#include<stdlib.h>

void imprime (int p){
	printf("Valor = %d \n", p);
}
struct ponto {
	int x, y;
};

int main(){
	struct ponto p1 = {10, 20};
	imprime(p1.x);
	imprime(p1.y);
		
	return 0;
}
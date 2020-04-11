#include<stdio.h>
#include<stdlib.h>

// Usando operador Seta...
struct ponto {
	int x, y;
};
void atribui (struct ponto *p){
	p -> x = 10;
	p -> y = 20;
}

int main(){
	struct ponto p1;
	atribui(&p1);
	printf("X = %d \n", p1.x);
	printf("Y = %d \n", p1.y);
	
	return 0;
}
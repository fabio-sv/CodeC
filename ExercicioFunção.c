#include<stdio.h>
#include<stdlib.h>

struct ponto {
	int x,y;
};

void imprime (int p){
	printf("Valor = %d\n",p);
}
int main () {
	struct ponto p1 = {10,20};
	imprime(p1.x); imprime(p1.y);
	system("pause");
	return 0;
	
}
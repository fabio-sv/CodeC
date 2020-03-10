#include<stdio.h>
#include<stdlib.h>

void soma_mais_um(int *n){
	*n = *n + 1;
	printf("Dentro da funcao %d \n",*n);
}
int main (){
	int x = 5;
	printf("antes da funcao %d \n", x);
	soma_mais_um(&x);
	printf("Depois da funcao %d\n", x);
	system("pause");
	
	return 0;
}
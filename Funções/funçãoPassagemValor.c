#include<stdio.h>
#include<stdlib.h>

void soma (int y){
	y++;
	printf("Dentro da funcao = %d \n", y);
}
int main(){
	
	int x = 5;
	
	printf("Antes da funcao = %d \n", x);
	soma(x);
	printf("Depois da funcao = %d \n", x);
	
	system("pause");
		
	return 0;
}
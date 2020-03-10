#include<stdio.h>
#include<stdlib.h>

int soma (int x, int y){
	return x + y;
}
int main(){
int a,b;
printf("Digite a:");
scanf("%d",&a);
printf("Digite :");
scanf("%d",&b);
printf("A soma eh %d", soma (a,b));
}
#include<stdio.h>

int main ()
{
	int i;
	int x;
	
	printf("Contar ate: ");
	scanf("%d", &x);
	printf("\n\n");
	
	for( i = 1; i <= x; i++){
		printf("%d\n",i);
	}
	system("pause");
}
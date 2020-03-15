#include<stdio.h>

int main ()
{
	float Notas [4] = {7.0, 6.5, 7.2, 8.0};
	int i;
	
	for(i = 0; i <= 3; i++)
	{
		printf("Notas [%d]: %.1f \n", i, Notas[i]);	
	}
	system("pause");
}


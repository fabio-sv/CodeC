#include<stdio.h>
#include<stdlib.h>

main (){
	int x, y, s;
	printf("\t\t********Digite valores para somar********\n");
	for (x = 0; x < 10; x++){
		printf("\n- Digite um valor para somar: ");
		scanf("%i", &y);
		s = s + y;
	}
	printf("\nValor da Soma de todos os numeros digitados: %i\n", s);
	return 0;
}
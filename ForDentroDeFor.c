#include<stdio.h>
#include<stdlib.h>

main (){
	int x, y;
	
	for(x = 1; x <= 10; x++){
		printf("\n");
		printf ("\nValores de Y Dentro de X %i", x);
		
		for(y = 1; y <= 5; y++){
			printf("\nValores para Y %i", y);
		}
	}
	return 0;
} 
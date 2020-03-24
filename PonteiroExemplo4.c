#include<stdio.h>
#include<stdlib.h>

main(){
	
	int *p, *p1;
	int c = 10;
	
	p = &c;
	p1 = p; //equivale a p1 = &c;
	
	printf("%i", *p1);
	
	return 0;
}
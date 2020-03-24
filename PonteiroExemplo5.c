#include<stdio.h>
#include<stdlib.h>

main(){
	
	int *p, *p1;
	int x = 10, y = 20;
	
	p = &x;
	p1 = &y;
	*p1 = *p; //equivale a y = x;
	
	printf("%i", *p1);
	
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

main(){
	
	int *p, *p1, x, y;
	
	p = &x;
	p1 = &y;
	
	if(p == p1){
		printf("Os valores sao iguais.\n");
	}
	else{
		printf("Os valores sao diferentes.\n");
	}
	return 0;
}
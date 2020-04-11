#include<stdio.h>
#include<stdlib.h>

void imprime (int *y, int z){
	int i;
	for(i = 0; i < z; i++){
		printf("Valor %d \n", y[i]);
	}
}
int main(){
	
	int x [5] = {10,20,40,70,80};
	imprime(x,5);
			
	return 0;
}
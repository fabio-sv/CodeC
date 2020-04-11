#include<stdio.h>
#include<stdlib.h>

// Array multidimencional...
void imprimeMatriz(int m[][2], int n){
	int i, y;
	for(i = 0; i < n; i++){
		for(y = 0; y < 2; y++){
			printf(" %d ", m[i][y]);
		}
	}
}

int main(){
	
	int mat [3][2] = {{1,2}, {3,4}, {5,6}};
	imprimeMatriz(mat,3);
	
		
	return 0;
}
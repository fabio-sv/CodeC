#include<stdio.h>
#include<stdlib.h>

	struct cadastro
	{
		char nome[50];
		int idade;
	};
	
	int main (){
		struct cadastro *vcad = (struct cadastro*) malloc(10*sizeof(struct cadastro));
		strcpy(vcad[0].nome, "Maria");
		vcad[0].idade = 30;
		
		strcpy(vcad[1].nome, "Cecilia");
		vcad[1].idade = 10;
		
		strcpy(vcad[2].nome, "Ana");
		vcad[2].idade = 10;
		
		printf("%s\n", vcad[0].nome);
		printf("%d\n", vcad[0].idade);
		printf("%s\n", vcad[1].nome);
		printf("%d\n", vcad[1].idade);
		printf("%s\n", vcad[2].nome);
		printf("%d\n", vcad[2].idade);
		
		free(vcad);
		
		return 0;	
}
	
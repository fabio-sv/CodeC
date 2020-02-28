#include<stdio.h>

int main ()
{
	//Primeiro definimos a Struct
	struct Ficha_Aluno //Ficha_Aluno é um tipo de dado
	{
	char Nome [40];
	int Numero;
	float Nota;	
	};
	//Criando a Variável
	struct Ficha_Aluno Aluno; //Ficha_Aluno é o tipo e "Aluno" é a variável

	printf("Nome do Aluno: ");
	fgets(Aluno.Nome, 40, stdin);
	printf("Numero do Aluno: ");
	scanf("%d", &Aluno.Numero);
	printf("Nota do Aluno: ");
	scanf("%f", &Aluno.Nota);
	
	printf("\n");
	
	printf(".........Lendos os Dados da Struct..........");
	printf("\n\n");
	printf ("Nome: %s", Aluno.Nome);
	printf("Numero: %d \n", Aluno.Numero);
	printf("Nota: %.1f \n", Aluno.Nota);
	printf("\n");
	
	system("pause");
	
}
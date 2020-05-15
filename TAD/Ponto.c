#include<stdlib.h>
#include<math.h>
#include "Ponto.h"

struct ponto{
	float x;
	float y;
};
//Cria um ponto
Ponto* Ponto_cria(float x, float y){
	
	Ponto* p = (Ponto *) malloc(sizeof(Ponto));
	if(p != NULL){
		p->x = x;
		p->y = y;
	}
	return p;
}
//Libera a memoria
void Ponto_libera(Ponto*p){
	free(p);
}
//Acessando o conteudo do Ponto
int Ponto_acessa (Ponto*p, float* x, float* y){
	if(p == NULL){
		return 0;
	}
	*x = p->x;
	*y = p->y;
	return 1;
}
//Atribui o valor 
int Ponto_atribui(Ponto* p, float x, float y){
	if(p == NULL){
		return 0;
	}
	p->x = x;
	p->y = y;
	
	return 1;
}	
//Calcula a distância entre dois pontos
float Ponto_Distancia (Ponto* p1, Ponto* p2){
	if(p1 == NULL || p2 == NULL){
		return -1;
	}
	float dx = p1->x - p2->x;
	float dy = p1->y - p2->y;
	
	return sqrt(dx * dx + dy * dy);	
}


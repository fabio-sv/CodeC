#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main(int argc, char** argv)
{
	float d;
	Ponto *p, *q;
	p = Ponto_cria(10,21);
	q = Ponto_cria(7,25);
	d = Ponto_Distancia(p,q);
	printf("A distancia e %f", d);
	
	return 0;
}
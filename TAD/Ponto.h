typedef struct ponto Ponto;
//Cria um novo ponto
Ponto* Ponto_cria(float x, float y);
//Libera o Ponto
void Ponto_Libera(Ponto* p);
//Acessa os valores de x e y de um ponto
int Ponto_acessa(Ponto* p, float* x, float* y);
//Atribui os valores de x e y a um ponto
int Ponto_atribui(Ponto* p, float x, float y);
//Calcula da distancia entre dois pontos
float Ponto_Distancia(Ponto* p1, Ponto* p2);

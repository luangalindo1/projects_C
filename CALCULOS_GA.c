/* CÁLCULOS USANDO GEOMETRIA ANALÍTICA
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float area (float, float, float, float, float, float);
float dist (float, float, float, float);

int main(int argc, char** argv)
{
	int opcao;
	float a, b, c, d, e, f;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Nesse algoritmo, iremos realizar cálculos diferentes.\n\n");
	printf("\n Digite 1 para calcular a área de um triângulo a partir de suas coordenadas.\n\n");
	printf("\n Digite 2 para calcular a distância entre dois pontos.\n\n");
	scanf("%d", &opcao);
	switch(opcao)
	{
	case 1:
		printf("\n Digite, nessa ordem, as três coordenadas (x,y) de cada ponto.\n\n");
		scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
		printf("\n As coordenadas digitadas, respectivamente, foram:\n");
		printf("\n A(%.2f,%.2f), B(%.2f,%.2f) e C(%.2f,%.2f).\n\n", a, b, c, d, e, f);
		printf("\n Nas quais A, B e C representam os vértices do triângulo.\n\n");
		printf("\n Com isso, a área, segundo Heron de Alexandria, é dada por:\n");
		printf("\n %.4f u.a\n\n", area(a, b, c, d, e, f));
		break;
	case 2:
		printf("\n Digite, nessa sequência, as coordenadas (x,y) de cada ponto.\n\n");
		scanf("%f%f%f%f", &a, &b, &c, &d);
		printf("\n As coordenadas digitadas, respectivamente, foram:\n");
		printf("\n A(%.2f,%.2f) e B(%.2f,%.2f).\n\n", a, b, c, d);
		printf("\n Onde A e B são os pontos os quais calcularemos a distância.\n\n");
		printf("\n Tal distância é dada por: %.4f u.d\n\n", dist(a, b, c, d));
		break;
	default:
		printf("\n COMANDO INVÁLIDO\n\n");
		break;
	}
	return 0;
}

float area (float q, float w, float e, float r, float t, float y)
{
	float S, P, L_1, L_2, L_3;

	L_1 = sqrt(pow(q - e, 2) + pow(w - r, 2));
	L_2 = sqrt(pow(q - t, 2) + pow(w - y, 2));
	L_3 = sqrt(pow(e - t, 2) + pow(r - y, 2));

	P = (L_1 + L_2 + L_3) / 2;

	S = sqrt(P * (P - L_1) * (P - L_2) * (P - L_3));

	return S;
}

float dist (float z, float x, float c, float v)
{
	float D;

	D = sqrt(pow(z - c, 2) + pow(x - v, 2));

	return D;
}

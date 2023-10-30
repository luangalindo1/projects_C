/* CÁLCULO DE ÁREA DE POLÍGONOS
LUAN FÁBIO MARINHO GALINDO
*/

// Será realizado o cálculo de áreas de alguns polígonos

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float area, m_lado;
	int n_lado;
	printf("\n Vamos calcular a área de um polígono.\n\n");
	printf("\n Observe que iremos trabalhar com triângulos equláteros, quadrados e hexágonos regulares.\n\n");
	printf("\n Com isso, digite a quantidade e a medida dos lados, respectivamente.\n\n");
	scanf("%d""%f", &n_lado, &m_lado);

	switch(n_lado)
	{
	case 3:
		area = (pow (m_lado, 2) * pow (3, 0.5)) / 4;
		printf("\n A área do triângulo solicitada é %f\n\n", area);
		break;
	case 4:
		area = pow (m_lado, 2);
		printf("\n A área do quadrado solicitada é %f\n\n", area);
		break;
	case 6:
		area = (3 * pow (m_lado, 2) * pow (3, 0.5)) / 2;
		printf("\n A área do hexágono solicitada é %f\n\n", area);
		break;
	default:
		printf("\n Você desobedeceu as condições do enunciado.\n\n");
		break;
	}
	return 0;
}

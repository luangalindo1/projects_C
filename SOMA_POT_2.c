/* SOMA DE UMA SEQUÊNCIA
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int N, i;
	double S;
	printf("\n Vamos realizar a soma dos N primeiros termos de uma sequência.\n\n");
	printf("\n Tal sequência é da forma 1 + 2 + 4 + 8 + 16 ...\n\n");
	printf("\n Digite o valor de N que você desejar.\n\n");
	printf("\n Observe que N é o número de potências de 2 que iremos somar.\n\n");
	scanf("%d", &N);

	if (N <= 1)
		printf("\n N deve ser maior que um.\n\n");
	else
	{
		i = 0;
		for (i = 0; i < N; i++)
			S += pow(2, i);
		printf("\n A soma é dada por %.0lf\n\n", S);
	}
	return 0;
}

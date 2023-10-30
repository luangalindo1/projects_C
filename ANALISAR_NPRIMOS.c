/* ESTUDO DE NÚMEROS PRIMOS
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int K, N, i, cont;

	printf("Digite um número qualquer.\n\n");
	scanf("%d", &N);

	if (N > 1)
	{
		cont = 0;
		for (i = N; i >= 1; i--)

			if (N % i == 0)
			{
				cont++;
				K = N / i;
				printf("\n%d é um divisor seu.\n\n", K);
			}

		if (cont == 2)
			printf("\n\nO número é primo\n\n");

		else
			printf("O número não é primo.\n\n");

		printf("Ele possui %d divisores.\n\n", cont);
		printf("Pela definição, um número primo só pode ser divisível por um e por ele mesmo.\n\n");
	}
	else if(N == 1)
		printf("O número 1 só pode ser dividido por ele mesmo.\nLogo, não satisfaz a definição de primo\n\n");
	else if(N == 0)
		printf("Zero não pode ser dividido por ele mesmo, pois seria uma indeterminação.\n\n");
	else
		printf("Há divergências acerca de números negativos serem primos.\n\n");

	return 0;
}
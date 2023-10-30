/* SOMA PSEUDO-RECURSIVA
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int cont, N, S;

	printf("Digite um número inteiro positivo.\n\n");

	scanf("%d", &N);

	if (N >= 0)
	{
		S = 0;
		for (cont = 1; cont <= 10; cont ++)
			{
				S += N;   /* N = N + S, sendo S um número inteiro */
				printf("A soma desse número com o anterior que você digitou é: %d\n\n", S);
				printf("Digite outro número.\n\n");
				scanf("%d", &N);
			}	
	}
	else
	{
		printf(" As condições do enunciado não foram satisfeitas.\n");
	}

	return 0;
}

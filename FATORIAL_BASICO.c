/* FATORIAL BÁSICO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int N, F, i, cont;
	for (cont = 1; cont <= 4; cont ++)
	{
		printf("\n Digite um número inteiro positivo\n\n Vamos calcular seu fatorial\n\n");
		scanf("%d", &N);

		if (N >= 0)
		{
			F = 1;
			for (i = N; i >= 1; i--)
			{
				F *= i;
			}
			printf("O valor de %d! é %d\n\n", N, F);
		}
		else
		{
			printf("Você digitou um número inválido\n\n");
		}
	}

	return 0;
}


/* ESTUDO DE IMPOSTO DE RENDA 
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	float N, D, I;
	setlocale(LC_ALL, "Portuguese");
	printf("Tome por R$960 o salário mínimo a ser analisado.\n");
	printf("Com isso, digite o seu salário.\n");
	scanf("%f", &N);
	printf("Digite o seu número de dependentes.\n");
	scanf("%f", &D);
	if (N <= 2 * 960)
	{
		printf("Você nâo paga imposto de renda.\n");
	}
	else if(N <= 3 * 960)
	{
		I = N * (1 - (0.05 * D)) * (0.05);
		if (I <= 0)
		{
			printf("Você nâo paga imposto.\n");
		}
		else

			printf("Seu imposto é dado por: %f\n", I);
	}
	else if (N <= 5 * 960)
	{
		I = N * ((1 - (0.05 * D)) * (0.1));
		if (I <= 0)
		{
			printf("Você não paga imposto.\n");
		}

		else

			printf("Seu imposto é dado por: %f\n", I);
	}
	else if (N <= 7 * 960)
	{
		I = N * ((1 - (0.05 * D)) * (0.15));
		if (I <= 0)
		{
			printf("Você nâo paga imposto.\n");
		}

		else

			printf("Seu imposto é dado por: %f\n", I);
	}
	else if (N > 7 * 960)
	{
		I = N * ((1 - (0.05 * D)) * (0.20));

		if (I <= 0)
		{
			printf("Você não paga imposto.\n");
		}

		else

			printf("Seu imposto é dado por: %f\n", I);
	}

	system("pause");

	return 0;
}

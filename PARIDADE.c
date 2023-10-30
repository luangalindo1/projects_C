/* ANÁLISE DE PARIDADE
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int k;

	printf("Digite um número inteiro qualquer.\n");
	scanf("%d", &k);

	if (k > 0)
	{
		printf("Temos um número inteiro positivo.\n");
		if ((k % 2) == 0)
		{
			printf("Esse número é par\n");
		}
		else
		{
			printf("Esse número é ímpar.\n");
		}
	}
	else if(k == 0)
	{
		printf("Zero é um número PAR\n");
	}
	else if (k < 0)
	{
		printf("Números negativos não tem paridade\n");
	}
	system("pause");
	return 0;
}

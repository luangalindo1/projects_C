/* CRIANDO UM ARRAY COM NÚMEROS PRIMOS
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void ler(int vet[]);
void primo(int vet[]);
void imprimir (int vet[]);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int K[15];
	printf("\n Digite valores inteiros positivos.");
	ler(K);
	primo(K);
	printf("\n O vetor primo é");
	imprimir(K);
	return 0;
}

void ler (int vet[15])
{
	int i;
	for (i = 0; i < 15; i++)
	{
		printf("\n ");
		scanf("%d", &vet[i]);
		if (vet[i] < 0)
		{
			vet[i] *= -1;
			printf("\n Valores negativos se tornarão positivos.\n");
			printf("\n %d\n", vet[i]);
		}
	}
	return;
}

void imprimir(int vet[15])
{
	int i;
	for (i = 0; i < 15; i++)
	{
		if(vet[i] != 'v')
			printf("\n %d", vet[i]);
	}
	return;
}

void primo(int vet[15])
{
	int	i, j, p;
	for (i = 0; i < 15; i++)
	{
		p = 0;
		for (j = 1; j <= vet[i]; j++)
			if (vet[i] % j == 0)
				p++;
		if (p != 2)
			vet[i] = 'v';
	}
	return;
}
/* ORDENAÇÃO DE PALAVRAS ALFABETICAMENTE - INSERTION SORT
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>
#include <string.h>

char ordem (char palavras [50][100], int N);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	char nome[50][100]; // 50 palavras, com até 100 caracteres
	int n, i;
	printf("\n Digite quantas palavras você quer ordenar. (MÁX 50) ");
	scanf("%d", &n);
	fflush(stdin); // limpar o buffer
	for (i = 0; i < n; i++)
	{
		printf("\n Digite a %d palavra.\n ", i + 1);
		gets(nome[i]);
	}
	ordem(nome, n);
	printf("\n As palavras, após ordenação alfabética, são: \n");
	for (i = 0; i < n; i++)
		printf("\n %s \n", nome[i]);
	return 0;
}

char ordem(char palavras[][100], int N)
{
	char aux[50];
	int i, j;

	for (i = 0; i < N; i++)
	{
		for (j = 1; j < N; j++)
		{
			if (strcmp(palavras[j - 1], palavras[j]) > 0)
			{
				strcpy(aux, palavras[j - 1]);
				strcpy(palavras[j - 1], palavras[j]);
				strcpy(palavras[j], aux);
			}
		}
	}
	return 0;
}
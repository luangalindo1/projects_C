/* ORDENAÇÃO DE NOMES E NÚMEROS - INSERT SORT
LUAN FÁBIO MARINHO GALINDO
MATRL.:118110382 */

#include <stdio.h>
#include <string.h>
#include <locale.h>

void ordem(char nome[100][100], int matr[10], int quant);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	char nomes[100][100];
	int matrl[10], n, i, m;
	printf("\n Digite a quantidade de alunos que você quer ordenar alfabeticamente. ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		printf("\n Digite o nome do %d aluno(a): ", i + 1);
		gets(nomes[i]); // Porquê ele não lê nomes com acento? Ex. josé = jos'
		fflush(stdin);
		printf("\n Digite sua matrícula. ");
		scanf("%d", &m);
		matrl[i] = m;
	}
	ordem(nomes, matrl, n);
	printf("\n Após a ordenação, os nomes e as matrículas, respectivamente, ficaram nessa ordem:\n");
	for (i = 0; i < n; i++)
		printf("\n %s %d ", nomes[i], matrl[i]);

	return 0;
}

void ordem(char palavras[100][100], int matr[10], int N)
{
	char aux_n[100]; // aux_n = vetor auxiliar para os nomes
	int i, j, aux_m; // aux_m = vetor auxiliar para as matrículas

	for (i = 0; i < N; i++)
	{
		for (j = 1; j < N; j++)
		{
			if (strcmp(palavras[j - 1], palavras[j]) > 0)
			{
				strcpy(aux_n, palavras[j - 1]);
				aux_m = matr[j - 1];
				strcpy(palavras[j - 1], palavras[j]);
				matr[j - 1] = matr[j];
				strcpy(palavras[j], aux_n);
				matr[j] = aux_m;
			}
		}
	}
}
/* JOGO DA VELHA
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void tabuleiro (char [][3]);
void imprimir (char [][3]);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	char tab[3][3];
	printf("\n Bem vindo ao Jogo da Velha!");
	tabuleiro(tab);
	printf("\n\n Final de jogo!\n\n");
	imprimir(tab);
	return 0;
}
void imprimir(char imp[][3])
{
	int i, j;
	printf("\n\n O tabuleiro atual é:\n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
			printf(" %c", imp[i][j]);
	}
}
void tabuleiro(char jogo[][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			jogo[i][j] = '-';
	do
	{
		imprimir(jogo);
		printf("\n\n Digite a linha e a coluna que você quer alterar.");
		scanf("%d%d", &i, &j);
		printf("\n\n Insira X ou O\n");
		fflush(stdin);
		scanf("%c", &jogo[i - 1][j - 1]);
		system("cls");
		imprimir(jogo);
		printf("\n\n Para continuar, digite 1. ");
		scanf("%d", &i);
	}
	while(i == 1);
	}

/* MAIOR E MENOR VALOR DE UMA MATRIZ
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void minimax (int [][10], int, int);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int matr[10][10], i , j, l, c; // l = linha; c = coluna;
	printf("\n Insira a quantidade de linhas e colunas, respectivamente. (MÁX 10x10)\n");
	scanf("%d%d", &l, &c);
	printf("\n Insira os elementos da matriz.");
	for (i = 0; i < l; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &matr[i][j]);
	minimax(matr, l, c);
	return 0;
}
void minimax(int m[][10], int ln, int cl) // m = matriz, ln = linha, cl = coluna;
{
	int i, j, maior, menor, lin, col, cont_maior, cont_menor;
	maior = m[0][0];
	lin = col = 0;
	cont_maior = cont_menor = 0; // Elementos que possuem o mesmo módulo do maior, e do menor procurado.
	for (i = 0; i < ln; i++)
		for (j = 0; j < cl; j++)
			if (m[i][j] > maior)
			{
				maior = m[i][j];
				lin = i;
				col = j;
			}
	menor = m[lin][0];
	for (j = 1; j < cl; j++)
		if (m[lin][j] < menor)
			menor = m[lin][j];
	for (i = 0; i < ln; i++)
		for (j = 0; j < cl; j++)
			if (m[i][j] == maior)
				cont_maior ++;
	for (j = 0; j < cl; j++)
		if (m[lin][j] == menor)
			cont_menor ++;

	printf("\n O maior elemento inserido é %d", maior);
	if (cont_maior >  1)
		printf("\n Ele se repetiu %d vezes. Considere a sua 1ª inserção.", cont_maior);
	printf("\n Ele se encontra na posição %dx%d", lin + 1, col + 1);
	printf("\n O menor valor dessa linha é %d", menor);
	if (cont_menor > 1)
		printf("\n Nessa linha, esse elemento se repetiu %d vezes.", cont_menor);
}
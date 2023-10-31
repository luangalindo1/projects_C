/* TRANSPOSIÇÃO DE MATRIZ
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void trocalinha (int [][10]);
void trocacoluna (int [][10]);
void imprimir (int [][10]);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int m[10][10], i, j;
	printf("\n Insira os elementos da matriz.\n");
	for (i = 0; i < 10; i++)
		for(j = 0; j < 10; j++)
			scanf("%d", &m[i][j]);
			//m[i][j] = i + j; (impressão para testes)
	imprimir(m);
	trocalinha(m);
	trocacoluna(m);
	return 0;
}
void imprimir(int imp[][10])
{
	int i, j;
	printf("\n\n A matriz atual é:\n");
	for (i = 0; i < 10; i++)
		{
		printf("\n");
		for (j = 0; j < 10; j++)
			printf(" %d", imp[i][j]);	
		}
}
void trocalinha(int tlinha[][10])
{
	int i, aux;
	for (i = 0; i < 10; i++)
	{
		aux = tlinha[1][i];
		tlinha[1][i] = tlinha[7][i];
		tlinha[7][i] = aux;
	}
	printf("\n\n Observe a matriz com as linhas 2 e 8 trocadas.\n");
	imprimir(tlinha);
}
void trocacoluna(int tcoluna[][10])
{
	int i, aux;
	for (i = 0; i < 10; i++)
	{
		aux = tcoluna[i][3];
		tcoluna[i][3] = tcoluna[i][9];
		tcoluna[i][9] = aux;
	}
	printf("\n\n Observe a matriz com as colunas 4 e 10 trocadas.\n");
	imprimir(tcoluna);
}
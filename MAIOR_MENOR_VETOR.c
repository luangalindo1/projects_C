/* MAIOR, MENOR E M�DIA DOS VALORES DE UM VETOR
LUAN F�BIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int v[10], i, j, n, maior, menor;
	float m, S;
	printf("\n Voc� deve montar um vetor com valores inteiros.\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("\n Digite o %d elemento. ", i + 1);
		scanf("%d", &n);
		v[i] = n;
	}
	S = 0;
	for (i = 0; i < 10; i++)
		S += v[i];
	m = S / 10; // m�dia
	printf("\n A m�dia dos valores � %f\n\n", m);
	maior = menor = v[0]; // o primeiro valor inserido � o maior e o menor, antes da inser��o de outros.
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (v[j] > maior)
				maior = v[j];
		}
		for (j = 0; j < 10; j++)
		{
			if (v[j] < menor)
				menor = v[j];
		}
	}
	printf("\n O maior valor inserido � %d e o menor � %d\n\n", maior, menor);
	return 0;
}
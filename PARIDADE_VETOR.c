/* PARIDADE NUM VETOR
LUAN F�BIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int V[100], k, t, i, p;
	printf("\n Digite o tamanho do vetor.(TAMANHO M�X 100) ");
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		printf("\n Digite o %d valor do vetor. ", i + 1);
		scanf("%d", &k);
		V[i] = k;
	}
	p = 0; // p � a quantidade de n�meros pares
	for (i = 0; i < t; i++)
	{
		if (V[i] % 2 == 0)
		{
			printf("\n %d � par.", V[i]);
			p++;
		}
	}
	printf("\n A quantidade de n�meros pares do vetor � %d\n\n", p);
	return 0;
}
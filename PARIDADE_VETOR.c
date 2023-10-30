/* PARIDADE NUM VETOR
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int V[100], k, t, i, p;
	printf("\n Digite o tamanho do vetor.(TAMANHO MÁX 100) ");
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		printf("\n Digite o %d valor do vetor. ", i + 1);
		scanf("%d", &k);
		V[i] = k;
	}
	p = 0; // p é a quantidade de números pares
	for (i = 0; i < t; i++)
	{
		if (V[i] % 2 == 0)
		{
			printf("\n %d é par.", V[i]);
			p++;
		}
	}
	printf("\n A quantidade de números pares do vetor é %d\n\n", p);
	return 0;
}
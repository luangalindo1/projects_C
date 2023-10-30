/* CONSTRUIR E BUSCAR VALORES NUM VETOR
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int V[20], x, i;

	printf("\n Digite os valores do vetor.\n\n");
	for (i = 0; i < 20; i++)
	{
		printf("O elemento %d é: ", i + 1);
		scanf("%d", &V[i]);
	}
	printf("\n Com isso, digite um valor inteiro qualquer.\n\n");
	scanf("%d", &x);

	for (i = 0; i < 20; i++)
	{
		if (V[i] == x)
			printf("\n Esse número está na posição %d\n\n", i + 1);
	}
	
	return 0;
}

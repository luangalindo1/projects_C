/* CONSTRUIR E SOMAR DOIS VETORES
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int V_1 [100], V_2[100], V_3[100], N, i;
	setlocale(LC_ALL, "PORTUGUESE");

	printf("\n Digite o número de elementos dos vetores. Ele pode ter no máximo 100 elementos.\n\n");
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		printf("\n Digite um valor inteiro para um elemento do primeiro vetor.\n\n");
		scanf("%d", &V_1[i]);
	}
	for (i = 0; i < N; i++)
	{
		printf("\n Digite um valor inteiro para um elemento do segundo vetor.\n\n");
		scanf("%d", &V_2[i]);
	}
	for (i = 0; i < N; i++)
		V_3[i] = V_1[i] + V_2[i];
	for (i = 0; i < N; i++)
		printf("\n O primeiro vetor é %d\n\n", V_1[i]);
	for (i = 0; i < N; i++)
		printf("\n O segundo vetor é %d\n\n", V_2[i]);
	for (i = 0; i < N; i++)
		printf("\n O vetor soma é %d\n\n", V_3[i]);

	return 0;
}

/* CRIANDO UM ARRAY COM NÚMEROS PRIMOS
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void ler (int[]);
void primos (int[], int[], int[]);

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "PORTUGUESE");
	int i, K[15], n_2[1], P[15];

	printf("\n Insira valores inteiros não nulos.");
	ler(K);
	primos(K, P, n_2);
	printf("\n O vetor primo é ");
	for (i = 0; i < n_2[0]; i++)
		printf("\n %d", P[i]);
	return 0;
}

void ler (int vet[])
{
	int i;
	for(i = 0; i < 15; i++)
		scanf("%d", &vet[i]);
}

void primos (int v[], int v_2[], int n_2[])
{
	int i, j, cont = 0, k = 0;
	n_2[0] = 0;
	for(i = 0; i < 15; i++)
	{
		for (j = v[i]; j >= 1; j--)
			if (v[i] % j == 0)
				cont++;
		if (cont == 2)
		{
			v_2[k] = v[i]; // Atribuindo valores primos ao vetor primo.
			k++;
			n_2[0]++; // Novo tamanho do vetor.
		}
		cont = 0;
	}
}
/* IMPRIMIR VALORES NÃO REPETIDOS EM UM ARRAY - V2
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void ler (int vet[], int);
void comprimir (int vet[], int);
int main(int argc, char** argv)
{
	int n, v[20];
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Digite quantos números você quer inserir.(MÁX 20) ");
	scanf("%d", &n);
	ler (v, n);
	printf("\n O vetor final é:\n ");
	comprimir (v, n);
	return 0;
}

void ler(int vet[], int q)
{
	int i;
	for (i = 0; i < q; i++)
	{
		printf("\n Digite o %d valor. ", i + 1);
		scanf("%d", &vet[i]);
	}
	return;
}
void imprimir (int vet[], int q)
{
	int i;
	for (i = 0; i < q; i++)
		if (vet[i] != 'v')
			printf("\n %d", vet[i]);
	return;
}
void comprimir(int vet[], int q)
{
	int i, j;
	for (i = 0; i < q; i++)
		for (j = i + 1; j < q; j++) // Vai comparar o valor com os posteriores a ele.
			if (vet[i] == vet[j])
				vet[j] = 'v'; // Atribui um valor "estranho" aos repetidos. 
	imprimir (vet, q);
	return;
}
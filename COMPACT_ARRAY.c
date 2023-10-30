/* LISTA 09 - EXERC�CIO 11
LUAN F�BIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void ler(int vet[], int);
void imprimir (int vet[], int);
void compact(int vet_1[], int vet_2[], int);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int A[100], B[100], n;
	printf("\n Digite a quantidade de valores que voc� quer inserir. (M�X 100) ");
	scanf("%d", &n);
	printf("\n Digite os valores para o vetor.\n");
	ler(A, n);
	printf("\n O vetor inserido �:");
	imprimir(A, n);
	compact(A, B, n);
	printf("\n O vetor ficar� assim:");
	imprimir(B, n);
	return 0;
}

void ler(int vet[], int q)
{
	int i;
	for(i = 0; i < q; i++)
		scanf("%d", &vet[i]);
	return;
}

void imprimir(int vet[], int q)
{
	int i;
	for(i = 0; i < q; i++)
		if(vet[i] != 'v') // N�o vai imprimir o lixo.
			printf("\n %d", vet[i]);
		else
			printf("\n "); // imprimir o lixo como espa�o em branco
	return;
}

void compact(int vet_1[], int vet_2[], int q)
{
	int i;
	for (i = 0; i < q; i++)
	{
		if(vet_1[i] > 0)
			vet_2[i] = vet_1[i];
		else
			vet_2[i] = 'v'; // Atribuindo um caractere, algo que o usu�rio n�o ir� inserir, como lixo.
	}
	return;
}
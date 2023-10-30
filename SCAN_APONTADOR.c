/* SCAN DE ARRAY POR APONTADOR
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void modulo(int [], int, int *, int *);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int arr[50], maior, menor, i, t;
	printf("\n Digite o tamanho da array. (MÁX 50) ");
	scanf("%d", &t);
	printf("\n Agora, insira os elementos da array.\n");
	for (i = 0; i < t; i++)
		scanf("%d", &arr[i]);
	modulo(arr, t, &maior, &menor);
	printf("\n O maior elemento inserido é %d e o menor é %d\n", maior, menor);
	system("pause");
	return 0;
}
void modulo(int ar[], int tam, int *p, int *q)
{
	int i;
	*p = *q = ar[0];
	for(i = 1; i < tam; i++)
	{
		if(ar[i] > *p)
			*p = ar[i];
		if(ar[i] < *q)
			*q = ar[i];
	}
}
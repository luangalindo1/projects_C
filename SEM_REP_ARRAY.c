/* IMPRIMIR VALORES N�O REPETIDOS EM UM ARRAY
LUAN F�BIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int v[20], aux, i, j, n;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Digite quantos n�meros voc� quer inserir.(M�X 20) ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\n\n Digite o %d valor. ", i + 1);
		scanf("%d", &v[i]);
	}
	printf("\n Os valores, sem repeti��o, s�o:");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
			if (v[j] > v[j + 1])
			{
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
	}
	for (i = 0; i < n; i++)
		if(v[i] != v[i + 1])
			printf("\n %d", v[i]);
	return 0;
}

/* IMPRIMIR VALORES NÃO REPETIDOS EM UM ARRAY - V3
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void ler (int[], int);
void mudar(int [], int [], int [], int );

int main (int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int v_i[20], n_f[1], v_f[20], n, i;

	printf("\n Digite quantos números você quer inserir.(MÁX 20) ");
	scanf("%d", &n);
	printf("\n Insira o vetor.");
	ler(v_i, n);
	mudar(v_i, v_f, n_f, n);
	printf("\n O novo vetor é ");
	for (i = 0; i < n_f[0]; i++)
		printf("\n %d", v_f[i]);
	return 0;
}

void ler (int vet[], int q)
{
	int i;
	for(i = 0; i < q; i++)
		scanf(" %d", &vet[i]);
	return;
}

void mudar(int v[], int v_2[], int n_2[], int n) // A ideia é criar outro vetor que não tenha valores repetidos.
{
	int i, j, cont = 0, k = 1;
	v_2[0] = v[0];
	n_2[0] = 1; // Nova quantidade de elementos.
	for(i = 0; i < n; i++)
	{
		for (j = 0; j < n_2[0]; j ++)
			if ( v[i] == v_2[j])
				cont ++;
		if (cont == 0) // Se não houver repetição, o valor vai para o vetor cópia
		{
			v_2[k] = v[i];
			n_2[0] ++;
			k ++;
		}
		cont = 0;
	}
	return;
}
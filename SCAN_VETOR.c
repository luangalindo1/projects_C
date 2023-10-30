/* PESQUISAR VALOR NO VETOR
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float V[20], v, X;
	int i, p;
	for (i = 0; i < 20; i++)
	{
		printf("\n Insira o %d valor do vetor. ", i + 1);
		scanf("%f", &v);
		V[i] = v;
	}
	printf("\n Agora, digite um dos valores que você inseriu no vetor.\n\n");
	printf("\n Se esse valor não estiver no vetor, informarei -1. ");
	scanf("%f", &X);
	p = 0;
	for (i = 0; i < 20; i++)
	{
		if (V[i] == X)
		{
			printf("\n Esse valor está na posição %d\n\n" , i + 1);
			p++; // p É UM CONTADOR PARA OS VALORES QUE SATISFAZEM A CONDIÇÃO
		}
	}
	if (p == 0)
		printf("\n -1 ");
	return 0;
}

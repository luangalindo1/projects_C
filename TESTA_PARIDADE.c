/* TESTE DE PARIDADE
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int paridade (int);
int main(int argc, char** argv)
{
	int N;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Informe um número. Vamos testar sua paridade.\n\n");
	scanf("%d", &N);

	if (paridade(N) == 1)
		printf("\n O número é par.\n\n");
	else
		printf("\n O número é ímpar.\n\n");
	return 0;
}

int paridade (int p)
{
	if (p % 2 == 0)
		return 1;
	else
		return 0;
}

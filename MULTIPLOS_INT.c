/* MÚLTIPLOS INTEIROS
LUAN FÁBIO MARINHO GALINDO
*/

// No VS Code, usar a codificação ISO-8859-1 para a leitura dos caracteres especiais

#include <stdio.h>
#include <locale.h>

int multi (int, int);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int p, q;
	printf("\n Digite um número inteiro positivo P.\n\n");
	scanf("%d", &p);
	printf("\n Digite a quantidade de múltiplos de P que você quer descobrir.\n\n");
	scanf("%d", &q);
	if (p <= 0 || q <= 0)
		printf("\n Você digitou dados inválidos\n\n");
	else
		multi(p,q);
		printf("\n Que são os números procurados.\n\n");
	return 0;
}

int multi(int P, int Q)
{
	int N = 1, M;
	for (M = 0; M < Q; M++)
	{
		N = M * P;
		printf("\n %d x %d = %d\n\n", P, M, N);
	}
	return 0;
}
/* SOMA-PRODUTO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int N, S, P;
	printf("Digite um número.\n\n");
	scanf("%d", &N);
	S = 0;
	P = 1;
	while(N != -1)
	{
		S += N;
		P *= N;
		printf(" A soma é igual a %d e o produto é igual a %d\n\n", S, P);
		printf("Digite outro número. Esse comando cessará quando você digitar -1.\n\n");
		scanf("%d", &N);
	}
	return 0;
}

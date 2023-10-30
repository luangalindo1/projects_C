/* MAIOR NÚMERO DIGITADO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int M, N, cont;
	M = 0;
	for (cont = 1; cont <= 10; cont++)
	{
		printf("Digite um número.\n\n");
		scanf("%d", &N);
		if (N > M)
			M = N;
		printf("O maior número que você já digitou é %d\n\n", M);
	}
	return 0;
}

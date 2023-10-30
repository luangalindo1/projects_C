/* SOMA PAR OU ÍMPAR
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int P, I, N, cont;
	I = 0;
	P = 0;
	for	(cont = 1; cont <= 10; cont++)
	{
		printf("Digite um número.\n\n");
		scanf("%d", &N);
		if (N % 2 == 0)
		{
			P += N;
		}
		else
		{
			I += N;
		}
		printf("A soma dos números pares digitados é %d\n\nE a soma dos ímpares é %d\n\n", P, I);
	}
	return 0;
}

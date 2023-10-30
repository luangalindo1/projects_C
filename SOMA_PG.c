/* SOMA DE NÚMEROS EM PROGRESSÃO GEOMÉTRICA
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(int argc, char** argv)
{
	int n, i;
	double S;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Vamos realizar um somatório\n\n");
	printf("A soma será da forma S = (n^i)/(n-i)\n\ncom i variando de 1 a  n-1.\n\n");
	printf("Você poderá escolher o valor de n, com n>2.\n\nDigite n \n\n");
	scanf("%d", &n);
	if (n > 2)
	{
		S = 0;
		for (i = 1; i <= (n - 1); i++)
		{
			S += (pow(n, i)) / (n - i);
		}
		printf("A soma desejada vale %lf\n\n", S);
	}
	else
	{
		printf("Você digitou um valor errado.\n\n");
	}
	return 0;
}

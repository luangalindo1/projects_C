/* MÉDIA E MAIOR VALOR EM VETOR 2
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float V[100], x, soma, ma, maior;
	int i, qelem, qmaior;
	printf("\n Insira a quantidade de elementos que você quer trabalhar. (No máximo 100):  ");
	scanf("%d", &qelem); // qelem == quantidade de elementos;
	for (i = 0; i < qelem; i++)
	{
		printf("\n Digite o %d elemento do vetor: ", i + 1);
		scanf("%f", &x); // x é o valor de cada elemento;
		V[i] = x;
	}
	soma = 0;
	for (i = 0; i < qelem; i++)
		soma += V[i];
	ma = soma / qelem; // ma == média aritmética;
	printf("\n A média aritmética dos elementos é: %f\n\n", ma);
	qmaior = 0; // maior == quantidade de elementos maiores que a MA;
	for (i = 0; i < qelem; i++)
	{
		if (V[i] > ma)
		{
			qmaior++;
			maior = V[i];
			printf("\n O elemento %d de valor %f é maior que a média aritmética.\n\n", i + 1, maior);
		}
	}
	printf("\n A quantidade de elementos maiores que a MA é: %d\n\n", qmaior);
	return 0;
}
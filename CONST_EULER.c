/* ESTIMAÇÃO DO NÚMERO DE EULER
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

double euler (int);

int main(int argc, char** argv)
{
	int P;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Vamos calcular um valor aproximado da constante de Euler.\n\n");
	printf("\n Determine o parâmetro de precisão que você quer usar.\n\n");
	printf("\n Recomendo um máximo de 20 termos.\n\n");
	scanf("%d", &P);
	if (P <= 0)
		printf("\n Digite um inteiro não nulo!\n\n");
	else
	{
		printf("\n O valor procurado é %lf \n\n", euler(P));
	}
	return 0;
}

float fator(int);
double euler(int e)
{
	int i;
	double S;
	S = 0;
	for (i = 1; i <= e; i++)
	{
		S += 1 / fator(i);
	}
	return S;
}

float fator(int f)
{
	int k;
	float F = 1;
	for (k = 1; k <=f; k++)
		F *= k;
	return F;
}

/* ESTIMAÇÃO DE VALOR DO COSSENO EM RADIANOS
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

double fcos (float);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float x;
	printf("\n Vamos calcular o valor do cosseno de um argumento X, em radianos. Digite o valor de X.\n\n");
	scanf("%f", &x);
	printf("\n O valor de cos(X) é %lf\n\n", fcos(x));
	return 0;
}
double fatorial (int f)
{
	int i;
	double N;

	N = 1;
	for (i = 1; i <= f; i++)
		N *= i;
	return N;
}
double fcos (float arg)
{
	int i, sinal;
	double S, R;

	S = 0;
	sinal = -1;
	for (i = 1; i <= 20; i++)
	{
		S += sinal * (pow(arg, 2 * i) / fatorial(2 * i));
		sinal *= -1;
	}
	R = 1 + S;

	return R;
}
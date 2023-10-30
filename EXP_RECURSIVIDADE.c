/* EXPONENCIAÇÃO POR RECURSIVIDADE
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

double potencia(int, int);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int b, exp;
	printf("\n Vamos realizar uma operação de exponenciação");
	printf("\n Digite um valor para a base. ");
	scanf("%d", &b);
	if (b < 0)
	{
		printf("\n Tomaremos apenas valores inteiros positivos.");
		b *= -1;
	}
	printf("\n Digite um valor para o expoente. ");
	scanf("%d", &exp);
	if (exp < 0)
	{
		printf("\n Tomaremos apenas valores inteiros positivos.");
		exp *= -1;
	}
	printf("\n O valor da exponencial é: %.0lf", potencia(b, exp));
	return 0;
}
double potencia(int p, int q)
{
	if (q == 0){
		return 1;
	}
	else{
		return p * potencia(p, q-1);
	}
}

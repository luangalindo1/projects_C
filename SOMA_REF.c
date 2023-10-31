/* SOMA COM PONTEIRO
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void incremento(float *);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float a;
	printf("\n Insira um número qualquer.\n");
	scanf("%f", &a);
	printf("\n Você inseriu a = %f\n", a);
	incremento(&a);
	printf("\n O novo valor é a = %f", a);
	return 0;
}
void incremento(float *p)
{
	float soma;
	printf("\n Digite o valor que você quer somar.\n");
	scanf("%f", &soma);
	*p += soma;	
}
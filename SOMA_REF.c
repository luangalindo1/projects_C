/* SOMA COM PONTEIRO
LUAN F�BIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void incremento(float *);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float a;
	printf("\n Insira um n�mero qualquer.\n");
	scanf("%f", &a);
	printf("\n Voc� inseriu a = %f\n", a);
	incremento(&a);
	printf("\n O novo valor � a = %f", a);
	return 0;
}
void incremento(float *p)
{
	float soma;
	printf("\n Digite o valor que voc� quer somar.\n");
	scanf("%f", &soma);
	*p += soma;	
}
/* PONTEIROS - ZERAR VALOR
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void zerar (int *, int *);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int a,b;
	printf("\n Digite dois valores inteiros.\n");
	scanf("%d%d", &a, &b);
	printf("\n Você digitou a = %d e b = %d", a, b);
	zerar(&a,&b);
	printf("\n Seus valores foram zerados. Tanto a = %d quanto b = %d", a, b);
	return 0;
}
void zerar(int *p, int *q)
{
	*p = *q = 0;
}
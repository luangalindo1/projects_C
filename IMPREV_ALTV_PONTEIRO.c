/* ALTERAR VALOR E INVERTER OS ALGARISMOS POR PONTEIRO
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int alterar(int *);
void imprev(int *); // imprev = imprime reverso
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int a, b, a0;
	float c;
	printf("\n Insira um número inteiro. ");
	scanf("%d", &a);
	a0 = a; // a0 é o valor de a antes das alterações
	c = (float) a/10; // Para resultados mais precisos, escolhi imprimir um float
	b = alterar(&a);
	printf("\n O resto da divisão por 10 é %d, e o valor dividido por 10, em float, é %.1f", b, c); 
	printf("\n Veja que, em inteiros, a = %d", a);                                                  
	imprev(&a0);
	return 0;
}
int alterar(int *p)
{
	int r; // r = resto
	r = *p % 10;
	*p = *p / 10;
	return r;
}
void imprev(int *q)
{
	printf("\n Os algarismos invertidos do número inserido são:\n ");
	while(*q > 0)
		printf("%d", alterar(q));
}
/* HORA ATUAL POR MINUTO
LUAN F�BIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void hora(int *, int *, int *);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int min, h, m;
	printf("\n Insira a quantidade de minutos, da meia noite de ontem at� a hora atual. ");
	scanf("%d", &min);
	hora(&min, &h, &m);
	printf("\n A hora atual � %dh%.2d.", h, m);
	return 0;
}
void hora(int *min_t, int *hr, int *mt)
{
	*hr = *min_t / 60;
	*mt = *min_t % 60;
}
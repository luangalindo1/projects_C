/* MÁXIMO DIVISOR COMUM POR RECURSIVIDADE
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int maxdivc(int, int);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int a, b;
	printf("\n Insira dois inteiros.\n");
	scanf("%d%d", &a, &b);
	printf("\n O mdc de %d e %d é %d", a, b, maxdivc(a, b));
	return 0;
}
int maxdivc(int p, int q)
{
	int mdc;
	if (q == 0)
		return p;
	else
	{
		mdc = maxdivc(q, p % q);
		if (mdc < 0)
			mdc *= -1;
		return mdc;
	}
}

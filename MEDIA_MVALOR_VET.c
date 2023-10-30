/* MÉDIA ARITMÉTICA EM VETORES
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float M[100], v, s, ma, maior;
	int r = 1, i = 0, qmaior, c, n; // Quando declarei nessa linha qmaior = 0, ficou dando erro. Porquê?
	while(r == 1)
	{
		printf("\n Digite um valor qualquer ");
		scanf("%f", &v);
		M[i] = v;
		s = n = ma = 0;
		for (c = 0; c <= i; c++)
		{
			s += M[c];
			n = c + 1;
			ma = s / n; // Ficaria melhor se eu pusesse essa equação para fora do for? == sim
		}
		qmaior = 0;
		for (c = 0; c <= i; c++)
		{
			if (M[c] > ma)
			{
				qmaior++;
				maior = M[c];
				printf("\n Um valor inserido maior que a MA dos valores é %f \n\n", maior);
			}
		}
		printf("\n A média aritmética dos valores é %f \n\n", ma);
		printf("\n A quantidade de valores inseridos maiores que a MA atual é %d \n\n", qmaior);
		printf("\n Se você quiser inserir outro valor, digite 1.  ");
		scanf("%d", &r);
		i++;
	}
	return 0;
}
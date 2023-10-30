/* CÁLCULO DE PI
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	double Pi;
	int k;

	printf ("Vamos calcular um valor estimado de pi.\n\n");

	k = 0;
	while(k <= 10000000)
	{
		Pi += (pow(-1, k) * 4) / (1 + 2 * k);

		k++;
	}
	printf ("O valor aproximado calculado é %.17lf \n\n", Pi);

	return 0;
}

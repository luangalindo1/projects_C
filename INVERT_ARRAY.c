/* INVERTER ORDEM DOS VALORES DE UM VETOR
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float v[20], aux;
	int i;
	printf("\n Digite 20 valores.");
	for (i = 0; i < 20; i++)
		scanf("%f", &v[i]);
	printf("\n Os valores inseridos são:");
	for (i = 0; i < 20; i++)
		printf("\n %f", v[i]);
	for (i = 0; i < 10; i++)
	{
		aux = v[19 - i];
		v[19 - i] = v[i];
		v[i] = aux;
		printf("\n vet i : %f  vet  19-i :%f", v[i], v[19 - i]);
	}
	printf("\n O novo vetor é:");
	for (i = 0; i < 20; i++)
		printf("\n %f", v[i]);
	return 0;
}
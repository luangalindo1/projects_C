/* �REA DE RET�NGULOS COM APONTADORES
LUAN F�BIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void medretang (float, float, float*, float*, int*);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float L1, L2, A, P;
	int tipo; // tipo = tipo de pol�gono (ret�ngulo ou quadrado).
	printf("\n Digite os valores para os lados do ret�ngulo.\n");
	scanf("%f%f", &L1, &L2);
	medretang(L1, L2, &A, &P, &tipo);
	printf("\n A �rea � %f cm�, e o per�metro � %f cm.", A, P);
	if (tipo == 1)
		printf("\n\n O pol�gono � um quadrado.");
	else
		printf("\n\n O pol�gono � um ret�ngulo.");
	return 0;
}
void medretang(float l1, float l2, float *a, float *p, int *tip)
{
	*a = l1*l2;
	*p = 2*(l1 + l2);
	if (l1 == l2)
		*tip = 1;
	else
		*tip = 0;
}

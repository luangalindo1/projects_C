/* PRECIFICAR CARRO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Vamos descobrir o custo do carro.\n\n");
	float Fabr, Tot;
	printf("\n O coloque o custo de Fábrica\n\n");
	scanf("%f", &Fabr);
	Tot = Fabr * (1.28) * (1.45);
	printf("\n Esse é o custo total %f\n\n", Tot);
	return 0;
}

/* ANÁLISE DE EMPRÉSTIMO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	float s,p;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Digite seu salário\n");
	scanf("%f", &s);
	
	printf("Digite o valor das prestações que você quer pagar\n");
	scanf("%f", &p);
	
	
	if (p <=(3*s/10) &&p>0 &&s>=0)
		printf("Seu empréstimo pode ser concedido.\n");
	else
	{
		printf("Os requisitos necessários não foram atendidos.\n");
	}
	system("pause");
	return 0;
}
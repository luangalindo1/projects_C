/* INSERÇÃO DE PREÇOS
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int	main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	float custo,venda;
	printf("Digite o custo do produto\n");
	scanf("%f", &custo);
	if (custo<20)
	{
		venda=custo*(1.45);
	}
	else
	{
		venda=custo*(1.3);
	}
	printf("O preço de venda é: %f\n", venda);
	system("pause");
	return 0;
}
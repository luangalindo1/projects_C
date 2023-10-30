/* CALCULADORA ELEMENTAR
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float soma, sub, prod, div, N_1, N_2;
	int op;
	printf("\n Nesse algoritmo, iremos manipular as quatro operações básicas\n\n");
	printf("\n Primeiramente, escolha a operação que você quer fazer.\n\n");
	printf("\n Suas opções são 1 - SOMA, 2 - SUBTRAÇÃO, 3 - PRODUTO, 4 - DIVISÃO.\n\n");
	scanf("%d", &op);
	printf("\n Agora, escolha dois valores para fazer isso.\n\n");
	scanf("%f%f", &N_1, &N_2);
	switch(op)
	{
	case 1:
		soma = N_1 + N_2;
		printf("\n A soma é dada por %f\n\n", soma);
		break;
	case 2:
		sub = N_1 - N_2;
		printf("\n A diferença entre o primeiro e o segundo número digitado é %f\n\n", sub);
		break;
	case 3:
		prod = N_1 * N_2;
		printf("\n O produto é dado por %f\n\n", prod);
		break;
	case 4:
		div = N_1 / N_2;
		printf("\n A razão entre o primeiro e o segundo número digitado é %f\n\n", div);
		break;
	default:
		printf("\n Você digitou uma opção inválida\n\n");
		break;
	}
	if (op == 2 || op == 4)
		printf("\n Não esqueça que as operações de subtração e de divisão não são comutativas!\n\n");
	return 0;
}

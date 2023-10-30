/* CÁLCULO DE IDADE
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	printf("ALGORITMO DA IDADE EM 2016\n");
	int Nascimento, Idade;
	printf("Digite o ano que você nasceu\n");
	scanf("%d", &Nascimento);
	Idade = 2016 - Nascimento;
	printf("Essa e sua idade: %d\n", Idade);
	return 0;
}

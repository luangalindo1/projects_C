/* CONVERSÃO HORA-SEGUNDOS
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int horario(int, int, int);
int main(int argc, char** argv)
{
	int valor_h, valor_m, valor_s;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Vamos transformar um horário qualquer na forma de segundos.\n\n");
	printf("\n Digite um valor para hora.\n\n");
	scanf("%d", &valor_h);
	printf("\n Agora, digite um valor correspondente aos minutos.\n\n");
	scanf("%d", &valor_m);
	printf("\n Finalmente, digite a ultima parte em segundos.\n\n");
	scanf("%d", &valor_s);
	if (valor_h < 0 || valor_m < 0 || valor_s < 0)
	{
		printf("\n Você digitou algum valor errado.\n");
		printf("\n Atente para o fato de todos esses valores serem inteiros positivos.\n\n");
	}
	else
	{
		printf("\n Os valores digitados, em segundos, correspondem a %d\n\n", horario(valor_h, valor_m, valor_s));
	}

	return 0;
}

int horario (int v_H, int v_M, int v_S)
{
	int H, M, S, K;

	H = v_H * 3600;
	M = v_M * 60;
	S = v_S;

	K = H + M + S;

	return K;
}

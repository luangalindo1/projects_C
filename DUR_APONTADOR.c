/* DURAÇÃO DE POR APONTADOR
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void duracao (int, int, int, int, int *, int *);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int hi, mi, hf, mf, H, M, op;
	printf("\n Nessa ordem, digite hora e minuto de início de jogo. ");
	scanf("%d %d", &hi, &mi); // hi = hora de inicio, mi = minuto de inicio.
	if (hi < 12)
	{
		printf("\n Você digitou a hora no formato 1~12? Se sim, digite 1.\n ");
		scanf("%d", &op);
		if (op == 1)
		{
			printf("\n Se você tiver inserido um horário do período da tarde ou noite, digite 1\n ");
			scanf("%d", &op);
			if (op == 1)
				hi += 12;
		}
	}
	while(mi >= 60) // Como a hora já foi definida pelo usuário, não faz sentido ele digitar um número maior ou igual a 60.
	{
		printf("\n Você digitou minutos inválidos. Insira novamente. ");
		scanf("%d", &mi);
	}
	printf("\n Com isso, digite agora a hora e minuto do final do jogo. ");
	scanf("%d %d", &hf, &mf); // hf e mf são hora e minuto finais, respectivamente.
	if (hf < 12)
	{
		printf("\n Você digitou a hora no formato 1~12? Se sim, digite 1.\n ");
		scanf("%d", &op);
		if (op == 1)
		{
			printf("\n Se você tiver inserido um horário do período da tarde ou noite, digite 1\n ");
			scanf("%d", &op);
			if (op == 1)
				hi += 12;
		}
	}
	while(mf >= 60)
	{
		printf("\n Você digitou minutos inválidos. Insira novamente. ");
		scanf("%d", &mi);
	}
	duracao(hi, mi, hf, mf, &H, &M);
	printf("\n O jogo durou %d hora(s) e %d minuto(s).", H, M);
	return 0;
}
void duracao(int h1, int m1, int h2, int m2, int *dh, int *dm) // dh e dm são duração em horas e minutos, respectivamente
{
	int op;
	*dh = h2 - h1;
	*dm = m2 - m1;
	if (*dh < 0) // Caso de o jogo durar perto de 24h
		*dh = (24 - h1) + h2;
	else if (*dh == 0) // Caso de o jogo durar um dia inteiro
	{
		printf("\n O jogo durou 24h? Se sim, digite 1\n ");
		scanf("%d", &op);
		if (op == 1)
			*dh += 24;
	}
	if (*dm < 0)
		*dm = (60 - m1) + m2;
}
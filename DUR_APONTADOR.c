/* DURA��O DE POR APONTADOR
LUAN F�BIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void duracao (int, int, int, int, int *, int *);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int hi, mi, hf, mf, H, M, op;
	printf("\n Nessa ordem, digite hora e minuto de in�cio de jogo. ");
	scanf("%d %d", &hi, &mi); // hi = hora de inicio, mi = minuto de inicio.
	if (hi < 12)
	{
		printf("\n Voc� digitou a hora no formato 1~12? Se sim, digite 1.\n ");
		scanf("%d", &op);
		if (op == 1)
		{
			printf("\n Se voc� tiver inserido um hor�rio do per�odo da tarde ou noite, digite 1\n ");
			scanf("%d", &op);
			if (op == 1)
				hi += 12;
		}
	}
	while(mi >= 60) // Como a hora j� foi definida pelo usu�rio, n�o faz sentido ele digitar um n�mero maior ou igual a 60.
	{
		printf("\n Voc� digitou minutos inv�lidos. Insira novamente. ");
		scanf("%d", &mi);
	}
	printf("\n Com isso, digite agora a hora e minuto do final do jogo. ");
	scanf("%d %d", &hf, &mf); // hf e mf s�o hora e minuto finais, respectivamente.
	if (hf < 12)
	{
		printf("\n Voc� digitou a hora no formato 1~12? Se sim, digite 1.\n ");
		scanf("%d", &op);
		if (op == 1)
		{
			printf("\n Se voc� tiver inserido um hor�rio do per�odo da tarde ou noite, digite 1\n ");
			scanf("%d", &op);
			if (op == 1)
				hi += 12;
		}
	}
	while(mf >= 60)
	{
		printf("\n Voc� digitou minutos inv�lidos. Insira novamente. ");
		scanf("%d", &mi);
	}
	duracao(hi, mi, hf, mf, &H, &M);
	printf("\n O jogo durou %d hora(s) e %d minuto(s).", H, M);
	return 0;
}
void duracao(int h1, int m1, int h2, int m2, int *dh, int *dm) // dh e dm s�o dura��o em horas e minutos, respectivamente
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
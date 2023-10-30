/* DURAÇÃO DE JOGO DE FUTEBOL EM SEGUNDOS
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int duracao(int, int, int, int, int, int);
int main(int argc, char** argv)
{
	int h_i, m_i, s_i, h_f, m_f, s_f; // hora, minuto, segundo - inicial e final
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Vamos calcular duração de um jogo de futebol, em segundos, baseado em seu horário de início.\n\n");
	printf("\n Digite a hora que o jogo vai começar.\n\n");
	scanf("%d", &h_i);
	printf("\n Digite o minuto que o jogo vai começar\n\n");
	scanf("%d", &m_i);
	printf("\n Digite o segundo que o jogo vai começar.\n\n");
	scanf("%d", &s_i);
	printf("\n Agora, digite a hora que o jogo acabou.\n\n");
	scanf("%d", &h_f);
	printf("\n Digite o minuto que o jogo acabou.\n\n");
	scanf("%d", &m_f);
	printf("\n Digite o segundo que o jogo acabou.\n\n");
	scanf("%d", &s_f);
	if (h_i < 0 || m_i < 0 || s_i < 0 || h_f < 0 || m_f < 0 || s_f < 0)
		printf("\n Você digitou valores inválidos.\n Todos devem ser inteiros positivos.\n\n");
	else if (h_i > 23 || h_f > 23 || m_i >= 60 || m_f >= 60 || s_i >= 60 || s_f >= 60)
		printf("\n Você digitou valores inválidos!\n\n");
	else	
	printf("\n A duração do  jogo, em segundos, foi %d\n\n", duracao(h_i, m_i, s_i, h_f, m_f, s_f));

	return 0;
}

int duracao (int h, int m, int s, int h_, int m_, int s_)
{
	int D, H, M, S;
	H = (h_ - h)*3600;
	M = (m_ - m)*60;
	S = (s_ - s);
	/* if (M <= 0)
		M = (m - m_ + 60)*60; // Mais uma hora
	if (S <= 0)
		S = (s - s_); */
	D = H + M + S;
	
	return D;
}

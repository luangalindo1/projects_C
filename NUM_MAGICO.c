/* NÚMERO MÁGICO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int num, sort, tent, resp;

	printf("\n Vamos gerar um valor aleatório de 0 a 500. \n\n");
	printf("\n Insira o número que você acha que foi gerado. \n\n");
	scanf("%d", &num);

	resp = 1;
	while(resp == 1)
	{
		srand(time(NULL));
		sort = rand() % 501;

		tent = 1;

		while(num != sort && tent <= 11)
		{
			tent ++;
			if (num > sort)
				printf("\n Você digitou um número maior que o sorteado.\n\n Tente novamente.\n\n");
			else if (num < sort)
				printf("\n Você digitou um número menor que o sorteado.\n\n Tente novamente.\n\n");
			scanf("%d", &num);
		}
		if (tent <= 3)
			printf("\n Você é muito sortudo! Foram só %d tentativas. \n\n", tent);

		else if(tent <= 6)
			printf("\n Você é sortudo! Foram só %d tentativas. \n\n", tent);

		else if(tent <= 10)
			printf("\n Muito bem, você acertou! Foram %d tentativas. \n\n", tent);

		else if (tent > 10)
		{
			printf("\n Você atingiu o limite de erros. O número sorteado foi %d \n\n", sort);
			printf("\n Foram %d tentativas.\n\n", tent);
		}

		printf("\n Você deseja tentar novamente? Caso sim, digite 1. \n\n");
		printf("\n Caso contrário, digite qualquer coisa. \n\n");
		scanf("%d", &resp);

		if (resp == 1)
		{
			printf("\n Digite o número o qual você acha que foi sorteado. \n\n");
			scanf("%d", &num);
		}
	}
	return 0;
}

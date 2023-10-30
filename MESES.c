/* MÊS DO ANO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int m;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Digite o número do mês\n");
	scanf("%d", &m);
	if (m <= 0 || m > 12)
	{
		printf("Mês inválido\n");
	}
	else
	{
		switch(m)
		{
		case 1:
			printf("Esse mês é janeiro\n");
			break;
		case 2:
			printf("Esse mês é fevereiro\n");
			break;
		case 3:
			printf("Esse mês é março\n");
			break;
		case 4:
			printf("Esse mês é abril\n");
			break;
		case 5:
			printf("Esse mês é maio\n");
			break;
		case 6:
			printf("Esse mês é junho\n");
			break;
		case 7:
			printf("Esse mês é julho\n");
			break;
		case 8:
			printf("Esse mês é agosto\n");
			break;
		case 9:
			printf("Esse mês é setembro\n");
			break;
		case 10:
			printf("Esse mês é outubro\n");
			break;
		case 11:
			printf("Esse mês é novembro\n");
			break;
		case 12:
			printf("Esse mês é dezembro\n");
			break;
		}
	}
	return 0;
}

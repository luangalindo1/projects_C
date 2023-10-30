/* PERÍODOS LETIVOS
LUAN FÁBIO MARINHO GALINDO
MATR.: 118110382 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int m;
	printf("Digite um mês\n");
	scanf("%d", &m);
	switch(m)
	{
	case 1:
		printf("Em janeiro, estamos de férias.\n");
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		printf("Entre fevereiro (mês 02) e junho (mês 06), é o 1° semestre letivo.\n");
		break;
	case 7:
		printf("Em julho, é o recesso (ou deveria ser).\n");
		break;
	case 8:
	case 9:
	case 10:
	case 11:
		printf("Entre agosto (mês 08) e novembro (mês 11), é o 2° semetre letivo.\n");
		break;
	case 12:
		printf("Em dezembro, estamos de férias.\n");
		break;
	default:
		printf("Você digitou um dado inválido.\n");
		break;
	}
	return 0;
}

/* DATAS DO ANO - VALIDAÇÃO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese" );
	int dia, mes, ano;
	printf ("Digite o dia\n");
	scanf ("%d", &dia);
	printf("Digite o mês\n");
	scanf("%d", &mes);
	printf("Digite o ano\n");
	scanf("%d", &ano);
	if ((dia > 31 || dia <= 0 || mes > 12 || mes <= 0))
	{
		printf("Esta data não existe.\n");
	}
	else if (dia <= 31)
	{
		if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
		{
			printf("Esta data é válida\n");
		}
		else if (mes != 2 && mes != 4 && mes != 6)
		{
			printf("Esta data não existe.\n");
		}
	}
	else if (dia <= 30)
	{
		if ((mes == 4 || mes == 6 || mes == 9 || mes == 11))
		{
			printf("Esta data é válida\n");
		}
		else
		{
			printf("Esta data não existe.\n");
		}
	}
	else if (dia <= 28)
	{
		if (mes == 2)
		{
			printf("Esta data é válida\n");
		}
		else
		{
			printf("Esta data não existe.\n");
		}
	}
	if (ano < 0)
	{
		printf("Essa data não existe\n");
	}
	printf("A data inserida é %d/%d/%d\n", dia, mes, ano);

	return(0);
}

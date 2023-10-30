/* LEITURA DE DATAS E OPERAR COM INTEIROS
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	int data_h, dia_h, mes_h, ano_h;
	int data_n, dia_n, mes_n, ano_n, idade;

	printf("Digite a data de hoje nesse formato: DDMMAAAA\n");
	scanf("%d", &data_h);

	dia_h = (data_h / 1000000);
	mes_h = (data_h / 10000) % 100;
	ano_h = (data_h % 10000);

	printf("A data é %d/%d/%d\n", dia_h, mes_h, ano_h);

	printf("Digite a sua data de nascimento nesse formato: DDMMAAAA\n");
	scanf("%d", &data_n);

	dia_n = (data_n / 1000000);
	mes_n = (data_n / 10000) % 100;
	ano_n = (data_n % 10000);

	printf("Sua data de nascimento é %d/%d/%d\n", dia_n, mes_n, ano_n);

	idade = ano_h - ano_n;

	if (mes_n > mes_h)
	{
		idade = ano_h - ano_n - 1;
		printf("Sua idade é %d ano(s)\n", idade);
	}
	else if (mes_n == mes_h)
	{
		if (dia_n > dia_h)
		{
			idade = ano_h - ano_n - 1;
			printf("Seu aniversário está próximo.\n");
			printf("Mas sua idade é: %d ano(s)\n", idade);
		}

		else if (dia_n == dia_h)
		{
			idade = ano_h - ano_n;
			printf("Feliz aniversário!\n");
			printf("Hoje você completou %d anos\n", idade);
		}

	}
	else if (ano_h <= ano_n)
	{
		if ((ano_h == ano_n))
		{
			idade = mes_h - mes_n;
			if (mes_n > mes_h)
			{
				printf("Você ainda não nasceu?\n");
			}

			else if (mes_n <= mes_h)
			{
				printf("Mal saiu do berço e já está programando?\n");
				printf("Você tem %d meses.\n", idade);
			}

			if ((ano_h < ano_n))
			{
				printf("Você veio do futuro?\n");
			}
		}

	}
	else
	{
		printf("Sua idade é %d ano(s)\n", idade);
	}
	return 0;
}

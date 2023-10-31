/* AGENDA COM MANUIPULAÇÃO DE ARQUIVOS 2
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define COL 128
#define LIN 512

//Funções relacionadas ao programa em si
void Adicionarctt(char[LIN][COL], char[LIN][COL], int[COL], int *);
void Apagarctt(char [][COL], char [][COL], int [], int *);
void BuscarNome(char [][COL], char [][COL], int [], int *);
void BuscarNumero(char [][COL], char [][COL], int [], int *);
void Exibir_tudo(char [][COL], char [][COL], int [], int *);
void Ordenarctts(char [LIN][COL], char [LIN][COL], int [COL], int *);

//Funções relacionadas a leitura e alteração dos arquivos
void Ler (char [LIN][COL], char [LIN][COL], int [COL], int *);
void Salvar(char[][COL], char [LIN][COL], int [COL], int *);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");

	char nomes[LIN][COL];
	int numero[COL];
	char email[LIN][COL];
	int qtd_c_adicionados = 0;
	int escolha = 1;

	Ler(nomes, email, numero, &qtd_c_adicionados);
	// É de suma importância executar essa função no começo
	printf("\n\a Bem vindo \n"); // \a => efeito sonoro
	do
	{
		printf("\n Escolha uma opção\n\n");
		printf("\n 0. Sair\n 1. Adicionar contato\n 2. Apagar contato \n 3. Procurar por nome \n 4. Procurar por número \n 5. Mostrar Dados\n");
		scanf("%d", &escolha);
		switch (escolha)
		{
		case 1:
			system("cls");
			Adicionarctt(nomes, email, numero, &qtd_c_adicionados);
			system("cls");
			break;
		case 2:
			system("cls");
            Apagarctt(nomes, email, numero, &qtd_c_adicionados);	
			break;
		case 3:
			system("cls");
            BuscarNome(nomes, email, numero, &qtd_c_adicionados);
			break;
		case 4:
			system("cls");
			BuscarNumero(nomes, email, numero, &qtd_c_adicionados);
			break;

		/*case 5:
			system("cls");
		    Ordenarctts(nomes, email, numero, &qtd_c_adicionados);
			break;*/
		case 5:
			system("cls");
		    Exibir_tudo(nomes, email, numero, &qtd_c_adicionados);
			break;
		default :
			system("cls");
			if(escolha != 0)
				printf("\a\n Digite uma opção válida \n");
			break;
		}
	}
	while(escolha != 0);
	Salvar(nomes, email , numero, &qtd_c_adicionados);
	//Importante chamar essa função no final ,pois irá garantir o salvamento dos dados
	return 0;
}
void Adicionarctt(char n[][COL], char email[][COL], int num[], int *qtd)
{
	// Adiciona um novo contato
	// fflush importante para limpar o buffer e minimizar erros
	printf("\n Digite o nome, email e número, respectivamente.\n Obs: Para nomes compostos utilizar _underline_.\n");
	fflush(stdin);
	gets(n[*qtd]);
	fflush(stdin);
	gets(email[*qtd]);
	fflush(stdin);
	scanf("%d", &num[*qtd]);
	*qtd += 1; //Adiciona um no contador de cadastros
	Ordenarctts(n, email, num, qtd);
}
void Apagarctt(char n[][COL], char email[][COL], int num[], int *qtd)
{
	int i, ctt_p_apagar;

	if (*qtd == 0)
		printf ("\n Você não tem contatos para serem deletados!\n");
	else
	{
		printf("\n Procure o contato que deseja apagar\n");
		Exibir_tudo(n, email, num, qtd);
		printf ("\n Digite a posição do contado que deseja apagar\n");
		scanf("%d", &ctt_p_apagar);
		ctt_p_apagar -= 1;
		for (i = ctt_p_apagar ; i < *qtd - 1; i++)
		{

			strcpy(n[i], n[i + 1]);
			strcpy(email[i], email[i + 1]);
			num[i] = num[i + 1];

		}
		*qtd -= 1;
	}
	Ordenarctts(n, email, num, qtd);
}
void BuscarNome(char n[][COL], char email[][COL], int num[], int *qtd)
{
	char aux[LIN][COL];
	int i, cont = 0;
	printf("\n Digite o nome procurado.\n");
	fflush(stdin);
	gets(aux[0]);
	for(i = 0; i < *qtd; i++)
	{
		if(strcmp(n[i], aux[0]) == 0)
		{
			printf("\n Os dados do contato procurado são:\n");
			printf("\n Nome: ");
			puts(n[i]);
			printf("\n E-mail: ");
			puts(email[i]);
			printf("\n Número: %d\n\n", num[i]);
			cont++;
		}
	}
	if(cont == 0)
		printf("\n Não existe esse contato na agenda\n");
}
void BuscarNumero(char n[][COL], char email[][COL], int num[], int *qtd)
{
	int aux, i, cont = 0;
	printf("\n Digite o número do contato procurado:\n\n");
	scanf("%d", &aux);
	for(i = 0; i < *qtd; i++)
		if(aux == num[i])
		{

			printf("\n Os dados do contato procurado são:\n\n");
			printf("\n Nome: ");
			puts(n[i]);
			printf("\n E-mail: ");
			puts(email[i]);
			printf("\n Número: %d\n\n", num[i]);
			cont++;
		}
	if(cont == 0)
		printf("\n Não existe esse contato na agenda\n");
}
void Exibir_tudo(char n[][COL], char email[][COL], int num[], int *qtd)
{
	int i;
	//Exibe todos os contatos
	if(*qtd == 0)
		printf("\n Não há dados\n");
	else
		for(i = 0; i < *qtd; i++)
		{
			printf("\n %d° contato\n", i + 1);
			printf("\n Nome: ");
			puts(n[i]);
			printf("\n E-mail: ");
			puts(email[i]);
			printf("\n Número: %d\n", num[i]);
		}
}
void Ler(char n[][COL], char email[][COL], int num[], int *qtd)
{
	//Lê os dados de um arquivo de texto, caso ele n exista ele cria um
	int i;
	FILE *quant;
	quant = fopen("quantctt.txt", "r"); //Abre o aquivo no modo leitura
	if(quant == NULL)
	{
		quant = fopen("quantctt.txt", "w"); //Se não existir o arquivo, crie.
		fclose(quant);
	}
	else
	{
		fscanf(quant, "Pessoas cadastradas: %d\n", qtd);
		fclose(quant);
	}
	FILE *nomes;
	nomes = fopen("nomesctt.txt", "r");
	if(nomes == NULL)
	{
		nomes = fopen("nomesctt.txt", "w");
		fclose(nomes);
	}
	else
	{
		for(i = 0; i < *qtd; i++)
			fscanf(nomes, "Nomes: %s\n", n[i]);
            fclose(nomes);
	}
	FILE *emails;
	emails = fopen("emailsctt.txt", "r");
	if(emails == NULL)
	{
		emails = fopen("emailsctt.txt", "w");
		fclose(emails);
	}
	else
	{
		for(i = 0; i < *qtd; i++)
			fscanf(emails, "E-mails: %s\n", email[i]);
		fclose(emails);
	}
	FILE *numeros;
	numeros = fopen("numctt.txt", "r");
	if(numeros == NULL)
	{
		numeros = fopen("numctt.txt", "w");
		fclose(numeros);
	}
	else
	{
		for(i = 0; i < *qtd; i++)
			fscanf(numeros, "Números: %d\n", &num[i]);
		fclose(numeros);
	}
}
void Salvar(char n[][COL], char email[][COL], int num[], int *qtd)
{
	//Escreve em um arquivo de texto os dados do programa
	int i;
	FILE *quant;
	quant = fopen("quantctt.txt", "w");
	if(quant == NULL) //Ele não conseguiu abrir o arquivo/criar. Deve estar em algum lugar que precisa de permissão de ADM
		printf("\n Erro. \n");
	else
		fprintf(quant, "Pessoas cadastradas: %d\n", *qtd);
	fclose(quant);
	FILE *nomes;
	nomes = fopen("nomesctt.txt", "w");
	if(nomes == NULL) 
		printf("\n Erro. \n");
	else
		for(i = 0; i < *qtd; i++)
			fprintf(nomes, "Nomes: %s\n", n[i]);
	fclose(nomes);
	FILE *emails;
	emails = fopen("emailsctt.txt", "w");
	if(nomes == NULL)
		printf("\n Erro. \n");
	else
		for(i = 0; i < *qtd; i++)
			fprintf(emails, "E-mails: %s\n", email[i]);
	fclose(emails);
	FILE *numeros;
	numeros = fopen("numctt.txt", "w");
	if(numeros == NULL)
		printf("\n Erro. \n");
	else
		for(i = 0; i < *qtd; i++)
			fprintf(numeros, "Números: %d\n", num[i]);
	fclose(numeros);
}
void Ordenarctts(char n[][COL], char email[][COL], int num[], int *qtd)
{
	int i, j, auxNum;
	char aux[COL];
	for(j = 1; j < *qtd; j++)
		for(i = 0; i < (*qtd - 1); i++)
			if(strcmp(n[i], n[i + 1]) > 0)
			{
				strcpy(aux, n[i]);
				strcpy(n[i], n[i + 1]);
				strcpy(n[i + 1], aux);
				strcpy(aux, email[i]);
				strcpy(email[i], email[i + 1]);
				strcpy(email[i + 1], aux);
				auxNum = num[i];
				num[i] = num[i + 1];
				num[i + 1] = auxNum;
			}
	printf("\n Seus dados foram ordenados \n");
}
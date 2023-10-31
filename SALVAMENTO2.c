/* MANIPULAÇÃO BÁSICA DE ARQUIVO 2
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	char vetor[10];
	int valor;
	FILE *arquivo;

	arquivo = fopen("teste.txt", "wt"); //wt = Gravação
	                                    //rt = Leitura
	                                    //a  = append
	if(arquivo == NULL)     // Se houver algum erro, o ponteiro apontará para NULL
	{
		printf("Não foi possível abrir o arquivo");
		exit(0);
	}

	fprintf(arquivo, "Teste 456");

	fclose(arquivo);

	arquivo = fopen("teste.txt", "rt");
	if(arquivo == NULL) 
	{
		printf("Não foi possível abrir o arquivo");
		exit(0);
	}

	fscanf(arquivo, "%s %d", &vetor, &valor);
	printf("\n\n%s %d\n\n", vetor, valor);

	fclose(arquivo);

	system("pause");
	return 0;
}
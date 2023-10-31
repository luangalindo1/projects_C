/* MANIPULA��O B�SICA DE ARQUIVO 2
LUAN F�BIO MARINHO GALINDO
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

	arquivo = fopen("teste.txt", "wt"); //wt = Grava��o
	                                    //rt = Leitura
	                                    //a  = append
	if(arquivo == NULL)     // Se houver algum erro, o ponteiro apontar� para NULL
	{
		printf("N�o foi poss�vel abrir o arquivo");
		exit(0);
	}

	fprintf(arquivo, "Teste 456");

	fclose(arquivo);

	arquivo = fopen("teste.txt", "rt");
	if(arquivo == NULL) 
	{
		printf("N�o foi poss�vel abrir o arquivo");
		exit(0);
	}

	fscanf(arquivo, "%s %d", &vetor, &valor);
	printf("\n\n%s %d\n\n", vetor, valor);

	fclose(arquivo);

	system("pause");
	return 0;
}
/* MANIPULA��O DE ARQUIVOS
LUAN F�BIO MARINHO GALINDO
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	FILE *per;
	char pergunta[40];
	pergunta[0] = '\0';
	strcpy(pergunta, "Qual o seu nome?");
	per = fopen("questoes.txt", "w");
	fwrite(pergunta, 40, 1, per);
	fwrite("Qual a sua idade?", 40, 1, per);
	fclose(per);
	/* reabertura do arquivo */
	fopen("questoes.txt", "r");
	fread(pergunta, 40, 1, per);
	printf("\nA pergunta recuperada �: %s", pergunta);
	fread(pergunta, 40, 1, per);
	printf("\nA segunda pergunta recuperada �: %s\n", pergunta);
	fclose(per);
	system("pause");
	return 0;
}

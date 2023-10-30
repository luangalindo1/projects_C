/* PRIMEIRA ABORDAGEM COM APONTADOR
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

void categoria (int, char*);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int id;
	char cat;
	printf("\n Insira a idade do nadador. ");
	scanf("%d", &id);
	categoria(id, &cat);
	printf("\n A categoria é %c", cat);
	return 0;
}
void categoria(int id, char *p)
{
	if (id >= 5 && id <= 7)
		*p = 'A';
	else if(id <= 10)
		*p = 'B';
	else if(id <= 13)
		*p = 'C';
	else if(id <= 17)
		*p = 'D';
	else
		*p = 'E';
}

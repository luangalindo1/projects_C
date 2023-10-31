/* IMPRIMIR UM LOSANGO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int i, j;
	for (j = 4; j >= 0; j--)
	{
		for (i = 1; i <= j; i++)
			printf(" ");
		for (i = 1; i <= 9 - 2 * j; i++)
			printf("*");
		printf("\n");
	}
	for (j = 1; j <= 4; j++)
	{
		for (i=1; i<=j; i++)
			printf(" ");
		for (i=1; i<=9 -2*j; i++)
			printf("*");
		printf("\n");
	}
		return 0;
}

/*MAIOR NÚMERO - OPERADOR TENÁRIO
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	int x, y, max;
	printf("\n Entre com dois números\n\n");
	scanf("%d%d", &x, &y);
	max = (x > y) ? x : y;
	printf("max = %d\n", max);
	return 0;
}

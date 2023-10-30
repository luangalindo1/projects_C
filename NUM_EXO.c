/* NÚMERO COM CARACTERÍSTICA SINGULAR
LUAN FÁBIO MARINHO GALINDO
*/


#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int dir, esq, k;
	for (k = 1000; k <= 9999; k++)
	{
		dir = k % 100;
		esq = k / 100;
		if ((dir + esq) * (dir + esq) == k)
			printf("Um número com a característica aa + bb = k e k*k = aabb é %d\n\n", k);
	}
	return 0;
}

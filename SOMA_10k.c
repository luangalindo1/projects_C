/* SOMA DE 10k INTEIROS
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int N, S;
	S = 0;
	N = 0;
	for (N >= 0; N <= 10000; N++)
	{
		S += N;
	}
	printf("A soma dos 10000 primeiros inteiros é %d\n\n", S);
	return 0;
}

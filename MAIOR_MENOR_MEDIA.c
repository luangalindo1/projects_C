/* MÉDIAS E MAIOR/MENOR
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	int i;
	float M, N, Maior, Menor;
	printf("\n Digite uma nota média de um aluno.\n\n");
	printf("\n Enquanto você inserir um número positivo não nulo, calcularemos as médias,\n");
	printf("\n e descobriremos o maior valor, e o menor valor.\n\n");
	scanf("%f", &N);

	M = 0;
	i = 1;
	Maior = 0;
	Menor = 11;
	
	while(N >= 0)
	{
		M = N / i;
		
		if (N >= Maior)
			Maior = N;
		if (N <= Menor)
			Menor = N;
		
		printf("\n O maior valor inserido foi %f \n\n", Maior);
		printf("\n O menor valor inserido foi %f \n\n", Menor);
		printf("Digite uma nova média. A atual média das notas digitadas é %f\n\n", M);
		scanf ("%f", &N);
		i++;
	}

return 0;
}

/* RAÍZES DE EQUAÇÃO DO 2° GRAU
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float pos, neg, a, b, c, delta;
	int R;
	printf("Vamos calcular as raízes de uma equação ax^2 + bx + c = 0 .\n\n");
	printf("Se você desejar fazê-lo, digite 1; caso contrário, 0.\n\n");
	scanf("%d", &R);
	pos = 0;
	neg = 0;
	while(R == 1)
	{
		printf("\nDigite os valores de a,b,c respectivamente.\n\n");
		printf("Observe que se você não digitá-los nessa sequência, o resultado irá mudar.\n\n");
		scanf("%f", &a);
		scanf("%f", &b);
		scanf("%f", &c);

		delta = pow(b, 2) - 4 * a * c;
		pos = (-b + pow(delta, 0.5)) / (2 * a);
		neg = (-b - pow(delta, 0.5)) / (2 * a);
		if (delta < 0)
		{
			printf("Essa equação não tem raízes reais (discriminante negativo).\n\n");
		}
		else if(delta == 0)
		{
			printf("Com o discriminante nulo, a equação sé possui uma raíz. Ela é %f .\n\n", pos);
		}
		else
		{
			printf("As raízes são %f e %f . \n\n", pos, neg);
		}
		printf("Você deseja continuar ? Sim = 1; Não = 0\n\n");
		scanf("%d", &R);
	}
	return 0;
}

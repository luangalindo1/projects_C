/* MÉDIAS ARITMÉTICA-PONDERADA-HARMÔNICA
LUAN FÁBIO MARINHO GALINDO
MATRL.: 118110382 */

#include <stdio.h>
#include <locale.h>

float media_a (float, float, float);
float media_h (float, float, float);
float media_p (float, float, float);

int main(int argc, char** argv)
{
	int opcao;
	float v_1, v_2, v_3;
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n Primeiramente, escolha qual o tipo de média que você quer trabalhar.\n\n");
	printf("\n 1 - Aritmética; 2 - Ponderada; 3 - Harmônica\n\n");
	scanf("%d", &opcao);
	printf("\n Agora, digite três valores que você desejar.\n\n");
	scanf("%f%f%f", &v_1, &v_2, &v_3);
	switch(opcao)
	{
	case 1:
		printf("\n A média ARITMÉTICA é %f\n\n", media_a(v_1, v_2, v_3));
		break;
	case 2:
		printf("\n A média PONDERADA é %f\n\n", media_p(v_1, v_2, v_3));
		printf("\n Atente para o fato de os pesos serem 3,3,4; respectivamente.\n\n");
		break;
	case 3:
		printf("\n A média HARMÔNICA é %f\n\n", media_h(v_1, v_2, v_3));
		if (media_h(v_1, v_2, v_3) == 0)
		{
		printf("\n Cuidado! Se você digitar zero em algum dos valores, uma indeterminação aparece!\n\n");
		printf("\n Isso vai causar resultados err�neos.\n\n");	
		}		
		break;
	default:
		printf("\n Opção inválida.\n\n");
		break;
	}
	return 0;
}

float media_a(float a_1, float a_2, float a_3)
{
	float ma;
	ma = (a_1 + a_2 + a_3) / 3;
	return ma;
}
float media_p(float p_1, float p_2, float p_3)
{
	float mp;
	mp = (3 * p_1 + 3 * p_2 + 4 * p_3) / 10;
	return mp;
}
float media_h(float h_1, float h_2, float h_3)
{
	float mh;
	mh = 3 / ((1 / h_1) + (1 / h_2) + (1 / h_3));
	return mh;
}
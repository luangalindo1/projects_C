/*PRIMEIRO ALGORITMO EM C
LUAN FÁBIO MARINHO GALINDO
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(int argc, char** argv)
{
	printf("ALGORITMO I\n");
	float VALOR, PRESTAÇÃO;
	printf("Entre com o valor da compra\n");
	scanf("%f", &VALOR);
	PRESTAÇÃO = VALOR / 5;
	printf("Esse e o valor das prestações %f\n", PRESTAÇÃO);

	return 0;
}


/* Para arrumar a identação, Ctrl + shift + F (Falcon C++) */
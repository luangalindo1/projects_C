/* VOLUME DE CILINDRO
LUAN FÁBIO MARINHO GALINDO
MATR.: 118110382 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	float V,R,h; int cont;
	
	for (cont = 1; cont <=3; cont ++) 	
	{
	printf("Digite a altura do cilindro e o raio de sua base.\n");
	scanf("%f%f", &h, &R);
	V = M_PI*pow(R,2)*h;
	printf("O volume procurado é: %f\n", V);
	}
	
	return 0;
}
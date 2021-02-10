#include <stdio.h>
#include <stdlib.h>

int main(){

	float peso, valor;

	printf("\n========================");
	printf("\n      SELF SERVICE      ");
	printf("\n========================");
	printf("\n Valor do kg: R$25.00");
	printf("\n------------------------");
	printf("\n Informe o peso do prato montado (kg): ");
	scanf("%f", &peso);

	valor = peso*25;

	printf("------------------------");
	printf("\n Valor final: R$%.2f", valor);

	return 0;
	system("pause");
}

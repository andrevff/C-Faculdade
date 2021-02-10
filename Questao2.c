#include <stdio.h>
#include <stdlib.h>

int main(){

    float preco, valor, litros;

    printf("\n=========================");
    printf("\n    POSTO DE GASOLINA    ");
    printf("\n=========================");
    printf("\n Informe o preco do litro de gasolina: ");
    scanf("%f", &preco);
    printf("\n Informe o valor a ser pago: ");
    scanf("%f", &valor);

    litros = valor/preco;

    printf("-------------------------");
    printf("\n Foram colocados %.1f litros no tanque", litros);

    system("pause");
    return 0;
}

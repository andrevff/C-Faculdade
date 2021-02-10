#include <stdio.h>
#include <stdlib.h>

int main(){

    int saque, saque2, saque3;
    float n10, n50, impo;

    printf("\n==============================");
    printf("\n       CAIXA ELETRONICO       ");
    printf("\n==============================");
    printf("\n Notas disponiveis: R$50,00");
    printf("\n                    R$10,00");
    printf("\n");
    printf("\n Informe o valor do saque: ");
    scanf("%d", &saque);

    n50 = saque/50;
    saque2 = saque - (n50*50);
    n10 = (saque2/10);
    saque3 = saque2 - (n10*10);
    impo = saque3;

    printf("\n----------------------------");
    printf("\n Notas de R$50,00: %.0f", n50);
    printf("\n Notas de R$10,00: %.0f", n10);
    printf("\n Parte do valor impossivel de ser sacada: R$%.2f", impo);
    printf("\n----------------------------\n");

    system("pause");
    return 0;
}

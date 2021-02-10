#include <stdio.h>
#include <stdlib.h>

int main(){

    float hec, cana, tot, custo, lucro;

    printf("Informe a quantidade de hectares do terreno: ");
    scanf("%f", &hec);

    cana = hec * 150;
    tot = cana * 1000;
    custo = tot - (tot * 60)/100;
    lucro = tot - custo;

    printf("\nProducao de cana-de-acucar: %.1f toneladas", cana);
    printf("\nTotal arrecadado: R$%.2f", tot);
    printf("\nCusto de producao: R$%.2f", custo);
    printf("\nLucro liquido: R$%.2f", lucro);

    system("pause");
    return 0;
}

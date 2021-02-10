#include <stdio.h>
#include <stdlib.h>
//Fiz utilizando a estrutura do "para", nesse caso, o for.
int main(){

    int i, n, soma, mult;

    soma = 0;
    mult = 1;

    printf("Digite 8 numeros: ");

    for(i = 0; i < 8; i++){
       scanf("%d", &n);
       soma = soma + n;
       mult = mult * n;
    }

    printf("Soma: %d", soma);
    printf("\nMultiplicacao: %d", mult);

    system("pause");
    return 0;
}

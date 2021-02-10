#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);

    if(x > y){
        printf("%d e maior do que %d", x, y);
    }else
        if(y > x){
            printf("%d e maior do que %d", y, x);
        }else{
            printf("Os numeros sao iguais");
        }

    system("pause");
    return 0;
}

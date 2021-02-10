#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if((num % 4 == 0)&&(num % 10 == 0)){
        printf("%d e divisivel por 4 e 10 simultaneamente", num);
    }else{
        printf("%d nao e divisivel por 4 e 10 simultaneamente", num);
    }

    system("pause");
    return 0;
}

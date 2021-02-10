#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    float n, met;

    printf("Digite seis numeros: ");

    for(i = 0; i < 6; i++){
        scanf("%f", &n);
        met = met + (n / 2);
    }

    printf("Soma da metade dos numeros: %.1f", met);

    system("pause");
    return 0;
}

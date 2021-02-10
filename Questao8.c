#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main(){

    float r, c, a, v;

    printf("Informe o raio da circunferencia: ");
    scanf("%f", &r);

    c = 2 * PI * r;
    a = PI * r * r;
    v = 0.75 * PI * r * r * r;

    printf("\nComprimento da circunferencia: %.2f", c);
    printf("\nArea da circunferencia: %.2f", a);
    printf("\nVolume da esfera: %.2f", v);

    system("pause");
    return 0;
}

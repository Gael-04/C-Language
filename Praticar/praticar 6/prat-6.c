#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_2grau(float a, float b, float c, float *delta, float *x1, float *x2){
    *delta = (b*b) - (4*a*c);
    *x1 = (-b + sqrt(*delta)) / (2*a);
    *x2 = (-b - sqrt(*delta)) / (2*a);
}

int main(){
    float a, b, c, del, x1, x2;

    printf("Insira o valor de a: \n");
    scanf("%f", &a);
    printf("Insira o valor de b: \n");
    scanf("%f", &b);
    printf("Insira o valor de c: \n");
    scanf("%f", &c);

    calcula_2grau(a, b, c, &del, &x1, &x2);

    printf("Delta: %.2f\nX1: %.2f\nX2: %.2f", del, x1, x2);

    return 0;
}
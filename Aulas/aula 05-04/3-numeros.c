#include <stdio.h>

void troca(int *x1, int *x2){
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

void ordemcrescente(int *x1, int *x2, int *x3){
    if(*x1 < *x2 && *x1 < *x3 && *x2 > *x3) troca(x2, x3);
    if(*x1 < *x2 && *x1 > *x3 && *x2 > *x3) {
        troca(x1, x2);
        troca(x1, x3);
    }
    if(*x1 > *x2 && *x1 < *x3 && *x2 < *x3) troca(x1, x2);
    if(*x1 > *x2 && *x1 > *x3 && *x2 < *x3) {
        troca(x1, x3);
        troca(x1, x2);
    }
    if(*x1 > *x2 && *x1 > *x3 && *x2 > *x3) troca(x1, x3);
}

int main()
{
    int a, b, c;

    printf("Insira a: \n");
    scanf("%i", &a);
    printf("Insira b: \n");
    scanf("%i", &b);
    printf("Insira c: \n");
    scanf("%i", &c);

    ordemcrescente(&a, &b, &c);
    printf("\n%i\n%i\n%i\n", a, b, c);

    return 0;
}

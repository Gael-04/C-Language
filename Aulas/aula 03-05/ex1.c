#include <stdio.h>

typedef struct p{
    float x;
    float y;
} ponto;

ponto dif(ponto p1, ponto p2){
    ponto dif;
    dif.x = p2.x - p1.x;
    dif.y = p2.y - p1.y;

    return dif;
}

int main()
{
    ponto p1, p2, p3;

    printf("Insira o x de p1: \n");
    scanf("%f", &p1.x);
    printf("Insira o y de p1: \n");
    scanf("%f", &p1.y);
    printf("Insira o x de p2: \n");
    scanf("%f", &p2.x);
    printf("Insira o y de p2: \n");
    scanf("%f", &p2.y);
    
    p3 = dif(p1, p2);

    printf("Diferenca entre os pontos: \n%.2f em x \n%.2f em y", p3.x, p3.y);

    return 0;
}
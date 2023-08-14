#include <stdio.h>
#include <locale.h>

float dl=0, pv=0, r=0;
int n=0;

float dep_lin(float custo, float valor, float anos){
     float dep=0;
    
    dep = (custo - valor) / anos;

    return dep;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("Insira o valor do custo de aquisição:");
    scanf("%f", &pv);
    printf("Insira o valor residual:");
    scanf("%f", &r);
    printf("Insira a vida útil em anos:");
    scanf("%i", &n);

    dl = dep_lin(pv, r, n);


    printf("O valor da depreciação linear é: %f", dl);

    return 0;
}

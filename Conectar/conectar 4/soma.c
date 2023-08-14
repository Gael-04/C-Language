#include <stdio.h>

int n1 = 0, result = 0;

int soma(int num){
    if(num == 1){
        return 1;
    }
    else{
        return num + soma(num - 1);
    }
}

int main()
{
    printf("Insira um numero natural (inteiro maior que 0): \n");
    scanf("%i", &n1);

    while(n1 <= 0){
        printf("Valor invalido, insira um numero natural (inteiro maior que 0): \n");
        scanf("%i", &n1);
    }

    result = soma(n1);
    printf("O resultado da operacao %i termial (%i?) e: %i\n", n1, n1, result);

    return 0;
}